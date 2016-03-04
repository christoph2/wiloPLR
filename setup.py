#!/bin/env/python

from distutils.core import setup,Extension
from glob import glob
from setuptools import find_packages

print find_packages()

setup(
    name = 'pywilo',
    version = '0.1',
    description= "WiloPLR library",
    author = 'Christoph Schueler',
    author_email = 'cpu12.gems@googlemail.com',
    url = 'https://github.com/christoph2/WiloPLR',
    packages = ['pywilo',],
    install_requires = ['pyserial', 'enum34', 'mock'],
)
