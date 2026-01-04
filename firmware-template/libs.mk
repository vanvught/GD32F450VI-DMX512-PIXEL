$(info $$DEFINES [${DEFINES}])

LIBS+=remoteconfig

ifeq ($(findstring NODE_ARTNET,$(DEFINES)),NODE_ARTNET)
  	ARTNET=1
  	DMXNODE=1
  	ifeq ($(findstring ARTNET_VERSION=3,$(DEFINES)),ARTNET_VERSION=3)
  	else
  		E131=1
  	endif
endif
  
ifeq ($(findstring NODE_E131,$(DEFINES)),NODE_E131)
  	ifneq ($(findstring e131,$(LIBS)),e131)
  		E131=1
  		DMXNODE=1
  	endif
endif
  
ifeq ($(findstring NODE_DDP_DISPLAY,$(DEFINES)),NODE_DDP_DISPLAY)
	LIBS+=ddp
endif

ifeq ($(findstring NODE_RDMNET_LLRP_ONLY,$(DEFINES)),NODE_RDMNET_LLRP_ONLY)
	RDM=1
	ifneq ($(findstring e131,$(LIBS)),e131)
		LIBS+=e131
	endif
endif

ifdef ARTNET
  	LIBS+=artnet
endif
  
ifdef E131
  	LIBS+=e131
endif

ifdef DMXNODE
  	LIBS+=dmxnode
endif

ifeq ($(findstring OUTPUT_DMX_SEND,$(DEFINES)),OUTPUT_DMX_SEND)
	DMX=1
endif

ifdef RDM
	LIBS+=rdm
endif

ifdef DMX
	LIBS+=dmx
endif

ifeq ($(findstring OUTPUT_DDP_PIXEL_MULTI,$(DEFINES)),OUTPUT_DDP_PIXEL_MULTI)
	LIBS+=pixeldmx pixel
else
	ifeq ($(findstring OUTPUT_DMX_PIXEL_MULTI,$(DEFINES)),OUTPUT_DMX_PIXEL_MULTI)
		LIBS+=dmxled pixeldmx pixel
	else
		ifeq ($(findstring OUTPUT_DMX_PIXEL,$(DEFINES)),OUTPUT_DMX_PIXEL)
			LIBS+=dmxled pixeldmx pixel
		endif
	endif
endif

ifeq ($(findstring OUTPUT_DDP_PIXEL,$(DEFINES)),OUTPUT_DDP_PIXEL)
	LIBS+=pixel
endif

LIBS+=network configstore flash displayudf display hal

$(info $$LIBS [${LIBS}])
