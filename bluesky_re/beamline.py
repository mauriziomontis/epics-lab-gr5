# Workarounds/patches
from ophyd.signal import EpicsSignalBase
EpicsSignalBase.set_defaults(connection_timeout= 5, timeout=200)

from ophyd import EpicsMotor

# standard magics
from bluesky.magics import BlueskyMagics
get_ipython().register_magics(BlueskyMagics)

# simulated devices
from ophyd.sim import det1, det2, det3, det4, motor1, motor2, motor, noisy_det   # two simulated detectors

from beamlinetools.devices.gaussmeter import Gaussmeter
Gauss = Gaussmeter('group5:', name='Gauss')
Gauss.wait_for_connection()

from beamlinetools.devices.motor import Motor
FB_stage = Motor('Gr5', name='FB_stage')
