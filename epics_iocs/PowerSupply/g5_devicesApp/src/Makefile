TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# Build the IOC application

PROD_IOC = g5_devices
# g5_devices.dbd will be created and installed
DBD += g5_devices.dbd

# g5_devices.dbd will be made up from these files:
g5_devices_DBD += base.dbd
g5_devices_DBD += calcSupport.dbd
g5_devices_DBD += stream.dbd
g5_devices_DBD += asyn.dbd
g5_devices_DBD += drvAsynIPPort.dbd


# Include dbd files from all support applications:
#g5_devices_DBD += xxx.dbd

# Add all the support libraries needed by this IOC
#g5_devices_LIBS += xxx
g5_devices_LIBS += calc
g5_devices_LIBS += stream
g5_devices_LIBS += asyn

# g5_devices_registerRecordDeviceDriver.cpp derives from g5_devices.dbd
g5_devices_SRCS += g5_devices_registerRecordDeviceDriver.cpp

# Build the main IOC entry point on workstation OSs.
g5_devices_SRCS_DEFAULT += g5_devicesMain.cpp
g5_devices_SRCS_vxWorks += -nil-

# Add support from base/src/vxWorks if needed
#g5_devices_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# Finally link to the EPICS Base libraries
g5_devices_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

