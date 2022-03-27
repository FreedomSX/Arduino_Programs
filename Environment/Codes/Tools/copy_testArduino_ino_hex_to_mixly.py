import os
os.system("@echo off")

cmdStr = "copy .\\testArduino\\testArduino.ino.hex C:\\mixly\\mixlyBuild\\testArduino.ino.hex /y"
# print(cmdStr)
os.system(cmdStr)
os.system("pause>nul")
