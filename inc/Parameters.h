/*
** WiloPLR - Communication with Wilo pumps.
**
** (C) 2009-2014 by Christoph Schueler <github.com/Christoph2,
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

#define WILO_REQUEST_TELEGRAM               ((uint8)0x03)
#define WILO_RESPONSE_TELEGRAM              ((uint8)0x00)

#define WILO_SETPOINT                       ((uint8)1)     /* Type: 32  Unit: 0,5 %    */
#define WILO_PUMP_COMMAND                   ((uint8)40)    /* Type. 1                  */
#define WILO_OPERATION_MODE                 ((uint8)42)    /* Type: 1                  */
#define WILO_T_MIN                          ((uint8)44)    /* Type: 32 Unit: 0,1K      */
#define WILO_T_MAX                          ((uint8)45)    /* Type: 32 Unit: 0,1K      */
#define WILO_P_MIN                          ((uint8)46)    /* Type: 32 Unit: 0,1 mWS   */
#define WILO_P_MAX                          ((uint8)47)    /* Type: 32 Unit: 0,1 mWS   */

#define WILO_COMMAND_ON                     ((uint8)1)
#define WILO_COMMAND_MIN_SPEED              ((uint8)2)
#define WILO_COMMAND_MAX_SPEED              ((uint8)4)

#define WILO_CONTROL_UNK                    ((uint8)0)
#define WILO_CONTROL_POS_MODE               ((uint8)1)
#define WILO_CONTROL_INVALID0               ((uint8)2)
#define WILO_CONTROL_DELTA_C                ((uint8)3)
#define WILO_CONTROL_DELTA_V                ((uint8)4)
#define WILO_CONTROL_INVALID1               ((uint8)5)
#define WILO_CONTROL_DELTA_T                ((uint8)6)

#define WILO_ACTUAL_DIFFERENTIAL_PRESSURE   ((uint8)1)
#define WILO_FLOW_RATE                      ((uint8)2)
#define WILO_POWER_CONSUMPTION              ((uint8)3)
#define WILO_POWER_RATING                   ((uint8)4)
#define WILO_OPERATION_HOURS                ((uint8)5)
#define WILO_MAINS_CURRENT                  ((uint8)6)
#define WILO_SPEED                          ((uint8)7)
#define WILO_MEDIUM_TEMPERATURE             ((uint8)8)
#define WILO_CURRENT_OPERATION_MODE         ((uint8)10)
#define WILO_PUMP_MODULE                    ((uint8)16)
#define WILO_PUMP_TYPE                      ((uint8)17)
#define WILO_MAX_SPEED                      ((uint8)18)
#define WILO_MIN_SPEED                      ((uint8)19)
#define WILO_MAX_PRESSURE_DELTA_C           ((uint8)20)
#define WILO_MIN_PRESSURE_DELTA_C           ((uint8)21)
#define WILO_MAX_PRESSURE_DELTA_V           ((uint8)22)
#define WILO_MIN_PRESSURE_DELTA_V           ((uint8)23)
#define WILO_MAX_FLOW_RATE                  ((uint8)24)
#define WILO_MIN_FLOW_RATE                  ((uint8)25)
#define WILO_SUPPORTED_ERRORS               ((uint8)26)
#define WILO_SUPPORTED_SERVICE_MESSAGES     ((uint8)27)
#define WILO_MAX_POWER_RATING               ((uint8)28)
#define WILO_SERVICE_MESSAGE                ((uint8)35)
#define WILO_ERROR_TYPE                     ((uint8)36)
#define WILO_ERROR_MESSAGE                  ((uint8)37)
#define WILO_PUMP_STATUS                    ((uint8)38)
#define WILO_STATE_DIAGNOSTICS              ((uint8)39)

