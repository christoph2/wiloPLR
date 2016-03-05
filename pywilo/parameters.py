#!/usr/bin/env python
# -*- coding: utf-8 -*-

##
## WiloPLR - Communication with Wilo pumps.
##
## (C) 2009-2016 by Christoph Schueler <github.com/Christoph2,
##                                      cpu12.gems@googlemail.com>
##
##
## All Rights Reserved
##
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; version 2 of the License.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
##
## s. FLOSS-EXCEPTION.txt
##

from collections import namedtuple
import enum

class Baudrate(enum.IntEnum):
    """Supported baudrates."""
    B1200    = 0
    B2400    = 1
    B4800    = 2
    B9600    = 3
    B19200   = 4
    B38400   = 5
    B57600   = 6
    B76800   = 7
    B115200  = 8


class FrameType(enum.IntEnum):
    """Valid frametypes."""
    REQUEST     = 3
    RESPONSE    = 0

SETPOINT        = 1     #: Type: 32  Unit: 0,5 %
PUMP_COMMAND    = 40    #: Type. 1
OPERATION_MODE  = 42    #: Type: 1
T_MIN           = 44    #: Type: 32 Unit: 0,1K
T_MAX           = 45    #: Type: 32 Unit: 0,1K
P_MIN           = 46    #: Type: 32 Unit: 0,1 mWS
P_MAX           = 47    #: Type: 32 Unit: 0,1 mWS

COMMAND_ON          = 1
COMMAND_MIN_SPEED   = 2
COMMAND_MAX_SPEED   = 4

CONTROL_UNK         = 0
CONTROL_POS_MODE    = 1
CONTROL_INVALID0    = 2
CONTROL_DELTA_C     = 3
CONTROL_DELTA_V     = 4
CONTROL_INVALID1    = 5
CONTROL_DELTA_T     = 6

ACTUAL_DIFFERENTIAL_PRESSURE    = 1
FLOW_RATE                       = 2
POWER_CONSUMPTION               = 3
POWER_RATING                    = 4
OPERATION_HOURS                 = 5
MAINS_CURRENT                   = 6
SPEED                           = 7
MEDIUM_TEMPERATURE              = 8
CURRENT_OPERATION_MODE          = 10
PUMP_MODULE                     = 16
PUMP_TYPE                       = 17
MAX_SPEED                       = 18
MIN_SPEED                       = 19
MAX_PRESSURE_DELTA_C            = 20
MIN_PRESSURE_DELTA_C            = 21
MAX_PRESSURE_DELTA_V            = 22
MIN_PRESSURE_DELTA_V            = 23
MAX_FLOW_RATE                   = 24
MIN_FLOW_RATE                   = 25
SUPPORTED_ERRORS                = 26
SUPPORTED_SERVICE_MESSAGES      = 27
MAX_POWER_RATING                = 28
SERVICE_MESSAGE                 = 35
ERROR_TYPE                      = 36
ERROR_MESSAGE                   = 37
PUMP_STATUS                     = 38
STATE_DIAGNOSTICS               = 39

MIN_BUFFER_SIZE = 120

