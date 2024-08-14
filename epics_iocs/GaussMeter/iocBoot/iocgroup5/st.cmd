#!../../bin/linux-x86_64/group5

#- You may have to change group5 to something else
#- everywhere it appears in this file

< envPaths
epicsEnvSet("STREAM_PROTOCOL_PATH", "/home/epics/workstation/group5/group5App/Db")
cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/group5.dbd"
group5_registerRecordDeviceDriver pdbbase
drvAsynIPPortConfigure ("lake_shore","192.168.1.95:9001")

## Load record instances
#dbLoadTemplate "db/user.substitutions"


#dbLoadRecords "db/magnet.db", "group=group5 device=GM"
dbLoadTemplate "db/magnet.substitutions"


cd "${TOP}/iocBoot/${IOC}"
iocInit

