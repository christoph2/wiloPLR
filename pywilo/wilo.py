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


import serial
import pywilo.parameters as parameters


class Datapoint(object):

    def __init__(self, address, type_, value):
        self._address = address
        self._type = type_
        self._valuehi = (value & 0xff00) >> 8
        self._valuelo = (value & 0xff)

    def _getAddress(self):
        return self._address

    def _getType(self):
        return self._type

    def _getValueHi(self):
        return self._valuehi

    def _getValueLo(self):
        return self._valuelo

    def _getChecksum(self):
        return (self.address +  self.type_ + self.valueHi + self.valueLo) % 256

    def _getData(self):
        return [self.address, self.type_, self.valueLo, self.valueHi]

    address = property(_getAddress)
    type_ = property(_getType)
    valueHi = property(_getValueHi)
    valueLo = property(_getValueLo)
    checksum = property(_getChecksum)
    data = property(_getData)



class WiloPump(object):

    def __init__(self, port):
        self._port = port


    def write(self, address, type_, writePoints, readPoints):
        checksum = address +  type_
        self._port.write([address, type_, ])

        checksum += len(writePoints)
        self._port.write(len(writePoints))
        for wp in writePoints:
            checksum += wp.checksum
            self._port.write(wp.data)


        self._port.write(len(readPoints))
        checksum += len(readPoints)
        for rp in readPoints:
            checksum += rp
            self._port.write([rp])

        self._port.write(checksum % 256)

    def response(self, frame):
        address = frame[0]
        type_ = frame[1]
        NumberOfReadPoints = frame[2]
        checksum = address + type_ + NumberOfReadPoints
        datapoints = []
        for idx in range(NumberOfReadPoints):
            offset = (idx * 4) + 3
            dp = Datapoint(frame[offset], frame[offset + 1], frame[offset + 2] << 8 | frame[offset + 3])
            datapoints.append(dp)
            checksum +=dp.checksum
        return (address, type_, datapoints)

