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


class DataType(enum.IntEnum):
    BYTE_LO    = 1
    BYTE_HI    = 2
    WORD_RES1  = 3
    WORD_RES01 = 32
    WORD_RES10 = 33


class DataTypeConverter(object):

    def fromType(self, type_, value):
        return DataTypeConverter.CONVERTERS_FROM[type_](self, value)

    def toType(self, type_, value):
        return DataTypeConverter.CONVERTERS_TO[type_](self, value)

    def fromByteHi(self, value):
        return value & 0xff

    def fromByteLo(self, value):
        return (value & 0xff00) >> 8

    def fromWordRes01(self, value):
        return (value >> 8) / 10.0

    def fromWordRes1(self, value):
        return (value >> 8) / 1.0

    def fromWordRes10(self, value):
        return (value >> 8) * 10.0

    def toByteHi(self, value):
        return value & 0xff

    def toByteLo(self, value):
        return (value & 0xff) << 8

    def toWordRes01(self, value):
        return int(value * 10.0) << 8

    def toWordRes1(self, value):
        return int(value) << 8

    def toWordRes10(self, value):
        return int(value / 10.0) << 8

    CONVERTERS_FROM = {
        DataType.BYTE_HI:       fromByteHi,
        DataType.BYTE_LO:       fromByteLo,
        DataType.WORD_RES01:    fromWordRes01,
        DataType.WORD_RES1:     fromWordRes1,
        DataType.WORD_RES10:    fromWordRes10,
    }

    CONVERTERS_TO = {
        DataType.BYTE_HI:       toByteHi,
        DataType.BYTE_LO:       toByteLo,
        DataType.WORD_RES01:    toWordRes01,
        DataType.WORD_RES1:     toWordRes1,
        DataType.WORD_RES10:    toWordRes10,
    }

