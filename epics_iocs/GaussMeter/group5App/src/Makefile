TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS BELOW HERE

# Use typed rset structure (see 3.16.1 release notes)
USR_CPPFLAGS += -DUSE_TYPED_RSET

# xxxRecord.h will be created from xxxRecord.dbd
DBDINC += xxxRecord

# Install xxxSupport.dbd into <top>/dbd
DBD += xxxSupport.dbd

# Build an IOC support library
LIBRARY_IOC += group5Support

# Compile and add code to the support library
group5Support_SRCS += xxxRecord.c
group5Support_SRCS += devXxxSoft.c

# Link locally-provided code into the support library,
# rather than directly into the IOC application, that
# causes problems on Windows DLL builds
group5Support_SRCS += dbSubExample.c
group5Support_SRCS += devgroup5Version.c
group5Support_SRCS += group5Hello.c
group5Support_SRCS += initTrace.c

group5Support_LIBS += $(EPICS_BASE_IOC_LIBS)

# Auto-generate a header file containing a version string.
# Version comes from the VCS if available, else date+time.
GENVERSION = group5Version.h
# Macro name
GENVERSIONMACRO = group5VERSION

# Build the IOC application
PROD_IOC = group5

# group5.dbd will be created and installed
DBD += group5.dbd

# group5.dbd will include these files:
group5_DBD += base.dbd
group5_DBD += xxxSupport.dbd
group5_DBD += dbSubExample.dbd
group5_DBD += devgroup5Version.dbd
group5_DBD += group5Hello.dbd
group5_DBD += initTrace.dbd
group5_DBD += stream-base.dbd
group5_DBD += asyn.dbd
group5_DBD += drvAsynIPPort.dbd

# group5_registerRecordDeviceDriver.cpp derives from group5.dbd
group5_SRCS += group5_registerRecordDeviceDriver.cpp

# Build the main IOC entry point where needed
group5_SRCS_DEFAULT += group5Main.cpp
group5_SRCS_vxWorks += -nil-

# Link in the code from our support library
group5_LIBS += group5Support
group5_LIBS += stream
group5_LIBS += asyn

# To build SNL programs, SNCSEQ must be defined
# in the <top>/configure/RELEASE file
ifneq ($(SNCSEQ),)
    # Build sncExample into group5Support
    sncExample_SNCFLAGS += +r
    group5_DBD += sncExample.dbd
    # A .stt sequence program is *not* pre-processed:
    group5Support_SRCS += sncExample.stt
    group5Support_LIBS += seq pv
    group5_LIBS += seq pv

    # Build sncProgram as a standalone program
    PROD_HOST += sncProgram
    sncProgram_SNCFLAGS += +m
    # A .st sequence program *is* pre-processed:
    sncProgram_SRCS += sncProgram.st
    sncProgram_LIBS += seq pv
    sncProgram_LIBS += $(EPICS_BASE_HOST_LIBS)
endif

# Link QSRV (pvAccess Server) if available
ifdef EPICS_QSRV_MAJOR_VERSION
    group5_LIBS += qsrv
    group5_LIBS += $(EPICS_BASE_PVA_CORE_LIBS)
    group5_DBD += PVAServerRegister.dbd
    group5_DBD += qsrv.dbd
endif

# Finally link IOC to the EPICS Base libraries
group5_LIBS += $(EPICS_BASE_IOC_LIBS)

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD EXTRA GNUMAKE RULES BELOW HERE

# Explicit dependency needed for generated header file
devgroup5Version$(DEP): $(COMMON_DIR)/$(GENVERSION)
