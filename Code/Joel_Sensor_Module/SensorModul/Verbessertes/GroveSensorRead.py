import time , sys, math
import grove_hightemperature_sensor as grovepi
from flask import Flask, make_response, Response
import base64
import cv2
import serial
from adc import ADC
import gc

class GroveSensorRead():

    def generateFrame(thermalCamera):
        gc.collect()
        #thermalCamera2 = cv2.VideoCapture(0)
        success, frame = thermalCamera.read()
        if not success:
            pass
        ret, buffer = cv2.imencode('.png', frame)
        frame = buffer.tobytes()
        #thermalCamera2.release()
        return frame

    def readCarbonmonoxid(adc):
        channel = 2 
        value = adc.read(channel)
        return value

    def readOxygen(adc):
        VRefer = 3.3
        total = 0
        Measuredvout = 0
        channel = 4
        value = adc.read(channel)
        if value != 0:
            voltage = value*3.3/1024.0
            Mix8410Value = voltage*0.21*100/2.0
            value = round(Mix8410Value,2)
        else:
            value = 0
        return value

    def readTemperature(arduinoSerialData):
        room_temperature_pin = 15
        probe_temperature_pin = 14
        sensor = grovepi.HighTemperatureSensor(room_temperature_pin, probe_temperature_pin)
        room_temperature = sensor.getRoomTemperature()
        probe_temperature = sensor.getProbeTemperature()
        return probe_temperature
