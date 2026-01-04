/**
 * usb_host.cpp
 *
 */
/* Copyright (C) 2024 by Arjan van Vught mailto:info@gd32-dmx.org
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <cstdint>

#include "gd32.h"

extern "C" {
#include "usbh_core.h"
#include "usbh_msc_core.h"
#include "drv_usb_core.h"
#include "drv_usbh_int.h"
void usb_vbus_drive (uint8_t);
void usb_mdelay(uint32_t);
}

static void usb_gpio_config() {

}

#if !defined (USE_USBHS1)
# error
#endif

void usb_rcu_config(void) {
#ifdef USE_USB_FS

#ifndef USE_IRC48M
	/* configure the pll1 input and output clock range */
	rcu_pll_input_output_clock_range_config(IDX_PLL1, RCU_PLL1RNG_4M_8M, RCU_PLL1VCO_192M_836M);

	rcu_pll1_config(5, 96, 2, 10, 2);
	/* enable PLL1Q clock output */
	rcu_pll_clock_output_enable(RCU_PLL1Q);
	rcu_osci_on(RCU_PLL1_CK);

#ifdef USE_USBHS0
    rcu_usbhs_pll1qpsc_config (IDX_USBHS0, RCU_USBHSPSC_DIV1);

    rcu_usb48m_clock_config(IDX_USBHS0, RCU_USB48MSRC_PLL1Q);
#endif /* USE_USBHS0 */

#ifdef USE_USBHS1
    rcu_usbhs_pll1qpsc_config (IDX_USBHS1, RCU_USBHSPSC_DIV1);

    rcu_usb48m_clock_config(IDX_USBHS1, RCU_USB48MSRC_PLL1Q);
#endif /* USE_USBHS1 */

#else
    /* enable IRC48M clock */
    rcu_osci_on(RCU_IRC48M);

    /* wait till IRC48M is ready */
    while (SUCCESS != rcu_osci_stab_wait(RCU_IRC48M)) {
    }

    rcu_ck48m_clock_config(RCU_CK48MSRC_IRC48M);

#ifdef USE_USBHS0
    rcu_usb48m_clock_config(IDX_USBHS0, RCU_USB48MSRC_IRC48M);
#endif /* USE_USBHS0 */

#ifdef USE_USBHS1
    rcu_usb48m_clock_config(IDX_USBHS1, RCU_USB48MSRC_IRC48M);
#endif /* USE_USBHS1 */

#endif /* USE_IRC48M */

#endif /* USE_USB_FS */

#ifdef USE_USBHS0
    rcu_periph_clock_enable(RCU_USBHS0);
#endif /* USE_USBHS0 */

#ifdef USE_USBHS1
    rcu_periph_clock_enable(RCU_USBHS1);
#endif /* USE_USBHS1 */

#ifdef USE_ULPI_PHY
    rcu_periph_clock_enable(RCU_ULPI);
#endif /* USE_ULPI_PHY */
}

void usb_intr_config() {
	nvic_priority_group_set(NVIC_PRIGROUP_PRE2_SUB2);

#ifdef USE_USBHS0
    nvic_irq_enable((uint8_t)USBHS0_IRQn, 3U, 0U);
#endif /* USE_USBHS0 */

#ifdef USE_USBHS1
    nvic_irq_enable((uint8_t)USBHS1_IRQn, 3U, 0U);
#endif /* USE_USBHS0 */

	/* enable the power module clock */
	rcu_periph_clock_enable(RCU_PMU);

#ifdef USE_USBHS0
    /* USB wakeup EXTI line configuration */
    exti_interrupt_flag_clear(EXTI_31);
    exti_init(EXTI_31, EXTI_INTERRUPT, EXTI_TRIG_RISING);
    exti_interrupt_enable(EXTI_31);

    nvic_irq_enable((uint8_t)USBHS0_WKUP_IRQn, 1U, 0U);
#endif /* USE_USBHS0 */

#ifdef USE_USBHS1
    /* USB wakeup EXTI line configuration */
    exti_interrupt_flag_clear(EXTI_32);
    exti_init(EXTI_32, EXTI_INTERRUPT, EXTI_TRIG_RISING);
    exti_interrupt_enable(EXTI_32);

    nvic_irq_enable((uint8_t)USBHS1_WKUP_IRQn, 1U, 0U);
#endif /* USE_USBHS1 */
}

void usb_vbus_config () {
#if defined (USB_HOST_VBUS_GPIOx)
    rcu_periph_clock_enable(USB_HOST_VBUS_RCU_GPIOx);

    gpio_mode_set(USB_HOST_VBUS_GPIOx, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, USB_HOST_VBUS_GPIO_PINx);
    gpio_output_options_set(USB_HOST_VBUS_GPIOx, GPIO_OTYPE_PP, GPIO_OSPEED_100_220MHZ, USB_HOST_VBUS_GPIO_PINx);

    usb_vbus_drive(0U);

    usb_mdelay(200);
#endif
}

void pllusb_rcu_config(uint32_t usb_periph) {
    pmu_usb_voltage_detector_enable();
    while (pmu_flag_get(PMU_FLAG_USB33RF) != SET) {
    }

    if(USBHS0 == usb_periph) {
        rcu_pllusb0_config(RCU_PLLUSBHSPRE_HXTAL, RCU_PLLUSBHSPRE_DIV5, RCU_PLLUSBHS_MUL96, RCU_USBHS_DIV10);
        RCU_ADDCTL1 |= RCU_ADDCTL1_PLLUSBHS0EN;
        while((RCU_ADDCTL1 & RCU_ADDCTL1_PLLUSBHS0STB) == 0U) {
        }

        rcu_usb48m_clock_config(IDX_USBHS0, RCU_USB48MSRC_PLLUSBHS);
        rcu_usbhs_clock_config(IDX_USBHS0, RCU_USBHSSEL_60M);
    } else {
        rcu_pllusb1_config(RCU_PLLUSBHSPRE_HXTAL, RCU_PLLUSBHSPRE_DIV5, RCU_PLLUSBHS_MUL96, RCU_USBHS_DIV10);
        RCU_ADDCTL1 |= RCU_ADDCTL1_PLLUSBHS1EN;
        while((RCU_ADDCTL1 & RCU_ADDCTL1_PLLUSBHS1STB) == 0U) {
        }

        rcu_usb48m_clock_config(IDX_USBHS1, RCU_USB48MSRC_PLLUSBHS);
        rcu_usbhs_clock_config(IDX_USBHS1, RCU_USBHSSEL_60M);
    }
}

usb_core_driver usbh_core;
usbh_host usb_host_msc;

extern usbh_user_cb usr_cb;

void usb_init() {
	usb_gpio_config();
	usb_rcu_config();
	usb_vbus_config();
	usbh_class_register(&usb_host_msc, &usbh_msc);
#ifdef USE_USBHS0
# ifdef USE_USB_FS
    usb_para_init (&usbh_core, USBHS0, USB_SPEED_FULL);
# endif
# ifdef USE_USB_HS
    usb_para_init (&usbh_core, USBHS0, USB_SPEED_HIGH);
# endif
#endif /* USE_USBHS0 */
# ifdef USE_USBHS1
# ifdef USE_USB_FS
    usb_para_init (&usbh_core, USBHS1, USB_SPEED_FULL);
# endif
# ifdef USE_USB_HS
	usb_para_init(&usbh_core, USBHS1, USB_SPEED_HIGH);
# endif
#endif /* USE_USBHS1 */
	usbh_init(&usb_host_msc, &usbh_core, &usr_cb);
#ifdef USE_USB_HS
# ifndef USE_ULPI_PHY
#  ifdef USE_USBHS0
	pllusb_rcu_config(USBHS0);
#  elif defined USE_USBHS1
	pllusb_rcu_config(USBHS1);
#  else
#  endif
# endif /* !USE_ULPI_PHY */
#endif /* USE_USB_HS */
	usb_intr_config();
}

extern "C" {
#ifdef USE_USBHS0
void USBHS0_IRQHandler(void) {
	usbh_isr (&usbh_core);
}
#endif /* USE_USBHS0 */
#ifdef USE_USBHS1
void USBHS1_IRQHandler(void) {
	usbh_isr(&usbh_core);
}
#endif /* USE_USBHS1 */
}
