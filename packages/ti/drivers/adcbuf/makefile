###################################################################################
# ADCBUF makefile
###################################################################################
include ../../common/mmwave_sdk.mak
include ./adcbuflib.mak

##################################################################################
# SOC Specific Test Targets
##################################################################################
ifeq ($(MMWAVE_SDK_DEVICE_TYPE),xwr14xx)
include ./test/$(MMWAVE_SDK_DEVICE_TYPE)/mssTest.mak
endif

ifneq ($(filter $(MMWAVE_SDK_DEVICE_TYPE),xwr16xx xwr18xx xwr68xx), )
include ./test/$(MMWAVE_SDK_DEVICE_TYPE)/mssTest.mak
include ./test/$(MMWAVE_SDK_DEVICE_TYPE)/dssTest.mak
endif

###################################################################################
# Standard Targets which need to be implemented by each mmWave SDK module. This
# plugs into the release scripts.
###################################################################################
.PHONY: all clean drv drvClean test testClean help

# This builds the ADCBUF Driver
drv: adcbufDrv

# This cleans the ADCBUF Driver
drvClean: adcbufDrvClean

###################################################################################
# Test Targets:
# XWR14xx: Build the MSS Unit Test
# XWR16xx/XWR18xx/XWR68xx: Build the MSS/DSS Unit Test
###################################################################################
ifeq ($(MMWAVE_SDK_DEVICE_TYPE),xwr14xx)
testClean: 	mssTestClean
test: 		mssTest
endif

ifneq ($(filter $(MMWAVE_SDK_DEVICE_TYPE), xwr16xx xwr18xx xwr68xx), )
testClean: 	mssTestClean dssTestClean
test: 		mssTest dssTest
endif

# Clean: This cleans all the objects
clean: drvClean testClean

# Build driver and all the unit tests
all: drv test

# Help: This displays the MAKEFILE Usage.
help:
	@echo '****************************************************************************************'
	@echo '* Makefile Targets for the ADCBUF '
	@echo 'clean                -> Clean out all the objects'
	@echo 'drv                  -> Build the Driver only'
	@echo 'drvClean             -> Clean the Driver Library only'
	@echo 'test                 -> Builds all the unit tests for the SOC'
	@echo 'testClean            -> Cleans the unit tests for the SOC'
	@echo '****************************************************************************************'

