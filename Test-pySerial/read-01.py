import serial

ser = serial.Serial('/dev/tty.usbmodem1421', 9600, timeout=1)

c = ser.read()
string = ser.read(10)
line = ser.readline()
ser.close