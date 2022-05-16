from flask import Flask
from flask_restful import Resource, Api
from adc import ADC
from GroveSensorController import GroveSensorController
import cv2
import serial

app = Flask(__name__)
api = Api(app)
thermalCamera = cv2.VideoCapture(0)
arduinoSerialData = serial.Serial('/dev/ttyUSB0',115200)
#arduinoSerialData = serial.Serial('/dev/ttyAMA0',115200)
adc = ADC()
class ReadAll(Resource):
    def get(self):
        return GroveSensorController.readAll(arduinoSerialData,adc)

class ReadCarbonmonoxid(Resource):
    def get(self):
        return GroveSensorController.readCarbonmonoxid(adc)

class ReadOxygen(Resource):
    def get(self):
        return GroveSensorController.readOxygen(adc)

class ReadTemperature(Resource):
    def get(self):
        return GroveSensorController.readTemperature(arduinoSerialData)

class ThermalCameraStream(Resource):
    def get(self):
        return GroveSensorController.getStream(thermalCamera)

api.add_resource(ReadAll, '/readAll')
api.add_resource(ReadCarbonmonoxid, '/readCarbonmonoxid')
api.add_resource(ReadOxygen, '/readOxygen')
api.add_resource(ReadTemperature, '/readTemperature')
api.add_resource(ThermalCameraStream,'/thermalCameraStream')

if __name__ == '__main__':
    app.run(debug=False, port=5000, host='0.0.0.0')



from GroveSensorRead import GroveSensorRead
from flask import Flask, make_response
import gc
class GroveSensorController():

    def getStream(thermalCamera):
        response = make_response(GroveSensorRead.generateFrame(thermalCamera))
        response.headers['Content-Type'] = 'image/png'
        return response

    def readAll(arduinoSerialData,adc):
        carbonValue = GroveSensorRead.readCarbonmonoxid(adc)
        statucCarbon = str(' ')
        if carbonValue > 0 and carbonValue is not None:
            if carbonValue > 400:
                statusCarbon = 'Danger'
            else:
                statusCarbon = 'Okay'
        else:
            statusCarbon = 'Error with CO-Sensor'

        oxygenValue = GroveSensorRead.readOxygen(adc)
        statusOxygen = str(' ')
        if oxygenValue > 0 and oxygenValue is not None:
            if oxygenValue > 8:
                statusOxygen = 'Okay'
            else:
                statusOxygen = 'Danger'
        else:
            statusOxygen = 'Error with O2-Sensor' 

        tempValue = GroveSensorRead.readTemperature(arduinoSerialData)
        statusTemp = str(' ')
        if tempValue > 0 and tempValue is not None:
            if tempValue > 200:
                statusTemp = 'Danger'
            else:
                statusTemp = 'Okay'
        else:
             statusTemp =  'Error with Temp-Sensor'

        return {'carbon' : {'value' : carbonValue, 'status' : statusCarbon}, 'oxygen' : {'value' : oxygenValue/2, 'status' : statusOxygen}, 'temperature' : {'value' : tempValue, 'status' : statusTemp}}

    def readCarbonmonoxid(adc):
        carbonValue = GroveSensorRead.readCarbonmonoxid(adc)
        statucCarbon = str(' ')
        if carbonValue > 0 and carbonValue is not None:
            if carbonValue > 400:
                statusCarbon = 'Danger'
            else:
                statusCarbon = 'Okay'
        else:
            statusCarbon = 'Error with CO-Sensor'

        return {'CarbonValue' : carbonValue, 'StatusCarbon' : statusCarbon}

    def readOxygen(adc):
        oxygenValue = GroveSensorRead.readOxygen(adc)
        statusOxygen = str(' ')
        if oxygenValue > 0 and oxygenValue is not None:
            if oxygenValue > 8:
                statusOxygen = 'Okay'
            else:
                statusOxygen = 'Danger'
        else:
            statusOxygen = 'Error with O2-Sensor'

        return { 'OxygenValue' : oxygenValue/2, 'StatusOxygen' : statusOxygen}

    def readTemperature(arduinoSerialData):
        tempValue = GroveSensorRead.readTemperature(arduinoSerialData)
        statusTemp = str(' ')
        if float(tempValue) > 0 and tempValue is not None:
            if tempValue > 200:
                statusTemp = 'Danger'
            else:
                statusTemp = 'Okay'
        else:
            statusTemp =  'Error with Temp-Sensor'

        return {'TempValue' : tempValue, 'StatusTemp' : statusTemp}
