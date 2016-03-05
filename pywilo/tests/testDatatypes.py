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

from pywilo.datatypes import DataTypeConverter
import unittest

class TestDataTypeConversion(unittest.TestCase):

    # 1   1 Bytewert in Lowbyte           0xF3    0xF3, 0x00
    # 2   1 Bytewert in Highbyte          0xF3    0x00, 0xF3
    # 3   2 Bytewert mit Auflösung 1      10      0x0A, 0x00
    # 32  2 Bytewert mit Auflösung 0,1    10.0    0x64, 0x00
    # 33  2 Bytewert mit Auflösung 10     10      0x01, 0x00

    def setUp(self):
        self.converter = DataTypeConverter()

    def testFromByteLow(self):
        self.assertEqual(self.converter.fromType(DataType.BYTE_LO, 0xF300), 0xf3)

    def testFromByteHi(self):
        self.assertEqual(self.converter.fromType(DataType.BYTE_HI, 0x00F3), 0xf3)

    def testFromWord1(self):
        self.assertEqual(self.converter.fromType(DataType.WORD_RES1, 0x0A00), 10.0)

    def testFromWord01(self):
        self.assertEqual(self.converter.fromType(DataType.WORD_RES01, 0x6400), 10.0)

    def testFromWord10(self):
        self.assertEqual(self.converter.fromType(DataType.WORD_RES10, 0x0100), 10.0)

    def testToByteLow(self):
        self.assertEqual(self.converter.toType(DataType.BYTE_LO, 0xF3), 0xf300)

    def testToByteHi(self):
        self.assertEqual(self.converter.toType(DataType.BYTE_HI, 0xF3), 0x00f3)

    def testToWord1(self):
        self.assertEqual(self.converter.toType(DataType.WORD_RES1, 10.0), 0x0a00)

    def testToWord01(self):
        self.assertEqual(self.converter.toType(DataType.WORD_RES01, 10.0), 0x6400)

    def testToWord10(self):
        self.assertEqual(self.converter.toType(DataType.WORD_RES10, 10.0), 0x0100)

def main():
    unittest.main()

if __name__ == '__main__':
    main()

