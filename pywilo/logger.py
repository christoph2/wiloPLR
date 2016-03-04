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


import logging

class Logger(object):

    LOGGER_BASE_NAME = 'pywilo'
    FORMAT = "[%(levelname)s (%(name)s)]: %(message)s"

    def __init__(self, level = logging.WARN):
        self.logger = logging.getLogger("{0}".format(self.LOGGER_BASE_NAME))
        self.logger.setLevel(level)
        handler = logging.StreamHandler()
        handler.setLevel(level)
        formatter = logging.Formatter(self.FORMAT)
        handler.setFormatter(formatter)
        self.logger.addHandler(handler)
        self.lastMessage = None
        self.lastSeverity = None

    def getLastError(self):
        result = (self.lastSeverity, self.lastMessage)
        self.lastSeverity = self.lastMessage = None
        return result

    def log(self, message, level):
        self.lastSeverity = level
        self.lastMessage = message
        self.logger.log(level, "{0}".format(message))

    def info(self, message):
        self.log(message, logging.INFO)

    def warn(self, message):
        self.log(message, logging.WARN)

    def error(self, message):
        self.log(message, logging.ERROR)

    def debug(self, message):
        self.log(message, logging.DEBUG)

    def critical(self, message):
        self.log(message, logging.CRITICAL)

    def verbose(self):
        self.logger.setLevel(logging.DEBUG)

    def silent(self):
        self.logger.setLevel(logging.CRITICAL)

    def setLevel(self, level):
        LEVEL_MAP = {
            "INFO": logging.INFO,
            "WARN": logging.WARN,
            "DEBUG": logging.DEBUG,
            "ERROR": logging.ERROR,
            "CRITICAL": logging.CRITICAL,
        }
        if isinstance(level, str):
            level = LEVEL_MAP.get(level.upper(), logging.WARN)
        self.logger.setLevel(level)

