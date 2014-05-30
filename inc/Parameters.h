/*
** WiloPLR - Communication with Wilo pumps.
**
** (C) 2009-2013 by Christoph Schueler <github.com/Christoph2,
**                                      cpu12.gems@googlemail.com>
**
**
** All Rights Reserved
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; version 2 of the License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**
** s. FLOSS-EXCEPTION.txt
*/

#define SETPOINT        ((uint8)1)     // Type: 32  Unit: 0,5 %
#define PUMP_COMMAND    ((uint8)40)    // Type. 1
#define OPERATION_MODE  ((uint8)42)    // Type: 1
#define T_MIN           ((uint8)44)    // Type: 32 Unit: 0,1K
#define T_MAX           ((uint8)45)    // Type: 32 Unit: 0,1K
#define P_MIN           ((uint8)46)    // Type: 32 Unit: 0,1 mWS
#define P_MAX           ((uint8)47)    // Type: 32 Unit: 0,1 mWS

#define COMMAND_ON          ((uint8)1)
#define COMMAND_MIN_SPEED   ((uint8)2)
#define COMMAND_MAX_SPEED   ((uint8)4)

#define CONTROL_UNK         ((uint8)0)
#define CONTROL_POS_MODE    ((uint8)1)
#define CONTROL_INVALID0    ((uint8)2)
#define CONTROL_DELTA_C     ((uint8)3)
#define CONTROL_DELTA_V     ((uint8)4)
#define CONTROL_INVALID1    ((uint8)5)
#define CONTROL_DELTA_T     ((uint8)6)

#define ACTUAL_DIFFERENTIAL_PRESSURE    ((uint8)1)
#define FLOW_RATE                       ((uint8)2)
#define POWER_CONSUMPTION               ((uint8)3)
#define POWER_RATING                    ((uint8)4)
#define OPERATION_HOURS                 ((uint8)5)
#define MAINS_CURRENT                   ((uint8)6)
#define SPEED                           ((uint8)7)
#define MEDIUM_TEMPERATURE              ((uint8)8)
#define CURRENT_OPERATION_MODE          ((uint8)10)
#define PUMP_MODULE                     ((uint8)16)
#define PUMP_TYPE                       ((uint8)17)
#define MAX_SPEED                       ((uint8)18)
#define MIN_SPEED                       ((uint8)19)
#define MAX_PRESSURE_DELTA_C            ((uint8)20)
#define MIN_PRESSURE_DELTA_C            ((uint8)21)
#define MAX_PRESSURE_DELTA_V            ((uint8)22)
#define MIN_PRESSURE_DELTA_V            ((uint8)23)
#define MAX_FLOW_RATE                   ((uint8)24)
#define MIN_FLOW_RATE                   ((uint8)25)
#define SUPPORTED_ERRORS                ((uint8)26)
#define SUPPORTED_SERVICE_MESSAGES      ((uint8)27)
#define MAX_POWER_RATING                ((uint8)28)
#define SERVICE_MESSAGE                 ((uint8)35)
#define ERROR_TYPE                      ((uint8)36)
#define ERROR_MESSAGE                   ((uint8)37)
#define PUMP_STATUS                     ((uint8)38)
#define STATE_DIAGNOSTICS               ((uint8)39)
