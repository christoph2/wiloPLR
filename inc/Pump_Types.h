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
#if !defined(__PUMP_TYPES)
#define __PUMP_TYPES

#if defined(__cplusplus)
extern "C"
{
#endif  /* __cplusplus */

#define WILO_PT_TOP_E40_1_10_EP_DP          ((uint8)1)
#define WILO_PT_TOP_E50_1_7_EP_DP           ((uint8)2)
#define WILO_PT_TOP_E50_1_10_EP_DP          ((uint8)3)
#define WILO_PT_TOP_E65_1_10_EP_DP          ((uint8)4)
#define WILO_PT_TOP_E80_1_10_EP_DP          ((uint8)5)
#define WILO_PT_TOP_E80_1_10_N_EP_DP        ((uint8)6)
#define WILO_PT_TOP_E25_1_7_EP              ((uint8)7)
#define WILO_PT_TOP_E30_1_10_EP             ((uint8)8)
#define WILO_PT_TOP_E40_1_4_EP              ((uint8)9)
#define WILO_PT_TOP_E50_1_6_EP_DP           ((uint8)10)
#define WILO_PT_TOP_E30_1_7_EP_DP           ((uint8)11)
#define WILO_PT_TOP_E40_1_10_IR_EP_DP       ((uint8)12)
#define WILO_PT_TOP_E50_1_7_IR_EP_DP        ((uint8)13)
#define WILO_PT_TOP_E50_1_10_IR_EP_DP       ((uint8)14)
#define WILO_PT_TOP_E65_1_10_IR_EP_DP       ((uint8)15)
#define WILO_PT_TOP_E80_1_10_IR_EP_DP       ((uint8)16)
#define WILO_PT_TOP_E40_1_7_IR_EP_DP        ((uint8)17)
#define WILO_PT_TOP_E100_1_10_IR_EP_DP      ((uint8)18)

#define WILO_PT_IP_E32_5_28_EP_DP           ((uint8)20)
#define WILO_PT_IP_E40_2_12_EP_DP           ((uint8)21)
#define WILO_PT_IP_E40_5_28_EP_DP           ((uint8)23)
#define WILO_PT_IP_E50_2_12_EP_DP           ((uint8)24)
#define WILO_PT_IP_E50_5_28_EP_DP           ((uint8)26)
#define WILO_PT_IP_E65_2_15_EP_DP           ((uint8)27)
#define WILO_PT_IP_E65_4_20_EP_DP           ((uint8)29)
#define WILO_PT_IP_E80_2_15_EP_DP           ((uint8)30)
#define WILO_PT_IP_E80_4_20_EP_DP           ((uint8)31)

#define WILO_PT_IL_E50_10_36_EP_IL_DP_DL    ((uint8)32)
#define WILO_PT_IL_E65_6_24_EP_IL_DP_DL     ((uint8)33)
#define WILO_PT_IL_E80_5_22_EP_IL_DP_DL     ((uint8)34)
#define WILO_PT_IL_E40_9_39_EP_IL_DP_DL     ((uint8)35)
#define WILO_PT_IP_E50_140_3_2_EP_DP        ((uint8)36)
#define WILO_PT_IP_E80_130_3_2_EP_DP        ((uint8)37)
#define WILO_PT_IP_E40_160_4_2_EP_DP        ((uint8)38)
#define WILO_PT_IP_E65_140_4_2_EP_DP        ((uint8)39)

#define WILO_PT_STRATOS_30_1_12_EP          ((uint8)40)
#define WILO_PT_STRATOS_40_1_8_ EP_DP       ((uint8)41)
#define WILO_PT_STRATOS_50_1_8_EP_DP        ((uint8)42)
#define WILO_PT_STRATOS_32_1_12_EP_DP       ((uint8)43)
#define WILO_PT_STRATOS_40_1_12_EP_DP       ((uint8)44)
#define WILO_PT_STRATOS_50_1_12_EP_DP       ((uint8)45)
#define WILO_PT_STRATOS_50_1_9_EP_DP        ((uint8)46)
#define WILO_PT_STRATOS_65_1_9_EP           ((uint8)47)
#define WILO_PT_STRATOS_65_1_12_EP_DP       ((uint8)48)
#define WILO_PT_STRATOS_80_1_12_EP_DP       ((uint8)49)
#define WILO_PT_STRATOS_100_1_12_EP_DP      ((uint8)50)
#define WILO_PT_STRATOS_25_1_6_EP           ((uint8)51)
#define WILO_PT_STRATOS_30_1_6_EP           ((uint8)52)
#define WILO_PT_STRATOS_40_1_4_EP           ((uint8)53)
#define WILO_PT_STRATOS_25_1_8_EP           ((uint8)54)
#define WILO_PT_STRATOS_30_1_8 _EP_DP       ((uint8)55)
#define WILO_PT_STRATOS_25_1_12_EP          ((uint8)56)

#define WILO_PT_MHIE205                     ((uint8)60)
#define WILO_PT_MHIE403                     ((uint8)61)
#define WILO_PT_MVIE205                     ((uint8)62)
#define WILO_PT_MVIE403                     ((uint8)63)
#define WILO_PT_MHIE405                     ((uint8)64)
#define WILO_PT_MHIE803                     ((uint8)65)
#define WILO_PT_MHIE1602                    ((uint8)66)
#define WILO_PT_MVIE208                     ((uint8)67)
#define WILO_PT_MVIE406                     ((uint8)68)
#define WILO_PT_MVIE803                     ((uint8)69)
#define WILO_PT_MVIE1602                    ((uint8)70)
#define WILO_PT_MHIE806                     ((uint8)71)
#define WILO_PT_MHIE1603                    ((uint8)72)
#define WILO_PT_MVIE214                     ((uint8)73)
#define WILO_PT_MVIE410                     ((uint8)74)
#define WILO_PT_MVIE806                     ((uint8)75)
#define WILO_PT_MVIE1603                    ((uint8)76)
#define WILO_PT_MVISE206                    ((uint8)77)
#define WILO_PT_MVISE404                    ((uint8)78)
#define WILO_PT_MVISE406                    ((uint8)79)
#define WILO_PT_MVISE803                    ((uint8)80)
#define WILO_PT_MVISE210                    ((uint8)81)
#define WILO_PT_MVISE410                    ((uint8)82)
#define WILO_PT_MVISE806                    ((uint8)83)
#define WILO_PT_SHCE20                      ((uint8)84)

#define WILO_PT_MVIE414                     ((uint8)90)
#define WILO_PT_MVIE808                     ((uint8)91)
#define WILO_PT_MVIE1605                    ((uint8)92)
#define WILO_PT_MVIE3202                    ((uint8)93)
#define WILO_PT_MVIE811                     ((uint8)94)
#define WILO_PT_MVIE1607                    ((uint8)95)
#define WILO_PT_MVIE3203                    ((uint8)96)
#define WILO_PT_MVIE5202                    ((uint8)97)

#define WILO_PT_IP_E32_100_0_55_2           ((uint8)101)
#define WILO_PT_IP_E32_110_0_75_2           ((uint8)102)
#define WILO_PT_IP_E40_120_1_5_2            ((uint8)103)
#define WILO_PT_IP_E40_130_2_2_2            ((uint8)104)
#define WILO_PT_IP_E50_130_2_2_2            ((uint8)105)

#if defined(__cplusplus)
}
#endif  /* __cplusplus */

#endif  /* __PUMP_TYPES */

