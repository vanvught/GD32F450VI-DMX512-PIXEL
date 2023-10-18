    Port 0 SK22
    Port 1 SK21
    Port 2 Internal 100Mbps
    Port 3 SK20
    Port 4 SK19
    Port 5 SFP1

[https://github.com/torvalds/linux/tree/master/drivers/net/dsa/mv88e6xxx](https://github.com/torvalds/linux/tree/master/drivers/net/dsa/mv88e6xxx)

    static const struct mv88e6xxx_ops mv88e6161_ops = {
      /* MV88E6XXX_FAMILY_6165 */
      .ieee_pri_map = mv88e6085_g1_ieee_pri_map,
      .ip_pri_map = mv88e6085_g1_ip_pri_map,
      .irl_init_all = mv88e6352_g2_irl_init_all,
      .set_switch_mac = mv88e6xxx_g2_set_switch_mac,
      .phy_read = mv88e6xxx_g2_smi_phy_read_c22,
      .phy_write = mv88e6xxx_g2_smi_phy_write_c22,
      .phy_read_c45 = mv88e6xxx_g2_smi_phy_read_c45,
      .phy_write_c45 = mv88e6xxx_g2_smi_phy_write_c45,
      .port_set_link = mv88e6xxx_port_set_link,
      .port_sync_link = mv88e6xxx_port_sync_link,
      .port_set_speed_duplex = mv88e6185_port_set_speed_duplex,
      .port_tag_remap = mv88e6095_port_tag_remap,
      .port_set_policy = mv88e6352_port_set_policy,
      .port_set_frame_mode = mv88e6351_port_set_frame_mode,
      .port_set_ucast_flood = mv88e6352_port_set_ucast_flood,
      .port_set_mcast_flood = mv88e6352_port_set_mcast_flood,
      .port_set_ether_type = mv88e6351_port_set_ether_type,
      .port_egress_rate_limiting = mv88e6097_port_egress_rate_limiting,
      .port_pause_limit = mv88e6097_port_pause_limit,
      .port_disable_learn_limit = mv88e6xxx_port_disable_learn_limit,
      .port_disable_pri_override = mv88e6xxx_port_disable_pri_override,
      .port_get_cmode = mv88e6185_port_get_cmode,
      .port_setup_message_port = mv88e6xxx_setup_message_port,
      .stats_snapshot = mv88e6xxx_g1_stats_snapshot,
      .stats_set_histogram = mv88e6095_g1_stats_set_histogram,
      .stats_get_sset_count = mv88e6095_stats_get_sset_count,
      .stats_get_strings = mv88e6095_stats_get_strings,
      .stats_get_stats = mv88e6095_stats_get_stats,
      .set_cpu_port = mv88e6095_g1_set_cpu_port,
      .set_egress_port = mv88e6095_g1_set_egress_port,
      .watchdog_ops = &mv88e6097_watchdog_ops,
      .mgmt_rsvd2cpu = mv88e6352_g2_mgmt_rsvd2cpu,
      .pot_clear = mv88e6xxx_g2_pot_clear,
      .reset = mv88e6352_g1_reset,
      .atu_get_hash = mv88e6165_g1_atu_get_hash,
      .atu_set_hash = mv88e6165_g1_atu_set_hash,
      .vtu_getnext = mv88e6352_g1_vtu_getnext,
      .vtu_loadpurge = mv88e6352_g1_vtu_loadpurge,
      .stu_getnext = mv88e6352_g1_stu_getnext,
      .stu_loadpurge = mv88e6352_g1_stu_loadpurge,
      .avb_ops = &mv88e6165_avb_ops,
      .ptp_ops = &mv88e6165_ptp_ops,
      .phylink_get_caps = mv88e6185_phylink_get_caps,
      .set_max_frame_size = mv88e6185_g1_set_max_frame_size,
    };


    static const struct mv88e6xxx_info mv88e6xxx_table[] = {
        {
            MV88E6XXX_FAMILY_6165,
            MV88E6XXX_PORT_SWITCH_ID_PROD_6161,
            "Marvell 88E6161",
            .num_databases = 4096,
            .num_macs = 1024,
            .num_ports = 6,
            .num_internal_phys = 5,
            .max_vid = 4095,
            .max_sid = 63,
            .port_base_addr = 0x10,
            .phy_base_addr = 0x0,
            .global1_addr = 0x1b,
            .global2_addr = 0x1c,
            .age_time_coeff = 15000,
            .g1_irqs = 9,
            .g2_irqs = 10,
            .atu_move_port_mask = 0xf,
            .pvt = true,
            .multi_chip = true,
            .edsa_support = MV88E6XXX_EDSA_SUPPORTED,
            .ptp_support = true,
            .ops = &mv88e6161_ops,
        }
    };