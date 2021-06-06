import serial
import requests

#Initiate
try:
    arduino = serial.Serial("/dev/ttyS0",timeout=0.01)
except:
    print('Please check the port')

#Receive messages and process them
while True:
   msg=arduino.readline().decode().strip()
   if "Bangkok" in msg:
       print("Flying to Bangkok")
       requests.get('http://localhost:5430/kml/flyto/100.501762/13.756331/58000')
   elif "London" in msg:
       print("Flying to London")
       requests.get('http://localhost:5430/kml/flyto/-0.127758/51.507351/37000')
   elif "Paris" in msg:
       print("Flying to Paris")
       requests.get('http://localhost:5430/kml/flyto/2.352413/48.856483/20000')
   elif "Dubai" in msg:
       print("Flying to Dubai")
       requests.get('http://localhost:5430/kml/flyto/55.270782/25.204849/107000')
   elif "Tokyo" in msg:
       print("Flying to Tokyo")
       requests.get('http://localhost:5430/kml/flyto/139.691711/35.689487/62000')
#More cities can be edited
