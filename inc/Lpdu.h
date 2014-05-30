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

#if !defined(__LPDU_H)
#define __LPDU_H

#if defined(__cplusplus)
extern "C"
{
#endif  /* __cplusplus */


#include "Types.h"

typedef struct tagWilo_DatapointType {
    uint8 address;
    uint8 type;
    uint8 valueHi;
    uint8 valueLo;
} Wilo_DatapointType;


void Wilo_WriteRequest(void (*writeFunction)(uint8 ch), uint8 address, uint8 telegramType, 
    uint8 numberOfWritePoints, Wilo_DatapointType const * const writePoints, 
    uint8 numberOfReadPoints, Wilo_DatapointType const * const readPoints
);


#if defined(__cplusplus)
}
#endif  /* __cplusplus */

#endif  /* __LPDU_H */

