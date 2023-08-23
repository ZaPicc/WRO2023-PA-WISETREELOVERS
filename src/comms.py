#!/usr/bin/python3

import serial
import time

ser = serial.Serial('/dev/wro/lidar', 115200, timeout=5)

# read from Arduino
input = ser.read()

while 1:
     try:
        # write something back
        print ("Read input " + input.decode("utf-8") + " from Arduino")

        time.sleep(1)
     except UnicodeDecodeError:
        pass