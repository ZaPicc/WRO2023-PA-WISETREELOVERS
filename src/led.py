import wiringpi
import time
ledPin = 1
wiringpi.wiringPiSetup()
wiringpi.pinMode(ledPin,1)
def run():
    while(True):
        wiringpi.digitalWrite(ledPin, 1)
        time.sleep(0.3)
        wiringpi.digitalWrite(ledPin, 0)
        time.sleep(0.3)