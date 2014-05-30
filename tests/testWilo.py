#!/usr/bin/env python
# -*- coding: utf-8 -*-

##
## WiloPLR - Communication with Wilo pumps.
##
## (C) 2009-2014 by Christoph Schueler <github.com/Christoph2,
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

import unittest
from pywilo.serialport import SerialPort
from pywilo.wilo import WiloPump, Datapoint
import pywilo.parameters as parameters

class MockPort(object):

    def write(self, data):
        print data

    def read(self):
        pass


class Test0(unittest.TestCase):
    pass

# TEL0 =(1, 3,    3,  40,  1, 9, 0,    42, 1, 3, 0,    1, 32, 80, 0,  0)

wp = WiloPump(MockPort())
#wp.write(3, REQUEST, [Datapoint(0x47, 1, 0x03f3)], [])
wp.write(1, parameters.REQUEST, [Datapoint(40, 1, 0x0009), Datapoint(42, 1, 0x0003), Datapoint(1, 32, 0x0050)], [])

unittest.main()
