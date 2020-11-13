#!/usr/bin/python

import sys

from ROOT import TFile

file = TFile(str(sys.argv[1]))
tree = file.Get(str(sys.argv[2]))
tree.Scan("","","",1,0)
