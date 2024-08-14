#!../../bin/linux-x86_64/g5_devices

#- You may have to change g5_devices to something else
#- everywhere it appears in this file

< envPaths
epicsEnvSet("STREAM_PROTOCOL_PATH", "$(TOP)/db")

## Register all support components
dbLoadDatabase "../../dbd/g5_devices.dbd"
g5_devices_registerRecordDeviceDriver(pdbbase) 

## Load record instances
#dbLoadRecords("../../db/g5_devices.db","user=epics")
dbLoadRecords("../../db/psu_database.db", "user=epics")

drvAsynIPPortConfigure("PSU_G5", "192.168.1.91:10001")
#drvAsynIPPortConfigure("GM_G5", "192.168.1.95:10001")

iocInit()

## Start any sequence programs
#seq sncg5_devices,"user=epics"
