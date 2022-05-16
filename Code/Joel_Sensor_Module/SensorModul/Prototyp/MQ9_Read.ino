void setup() { 
 Serial.begin(9600); 
} 
void loop() { 
 float R0 = 0.91; 
 int sensorValue = analogRead(A0); 
 sensor_volt = ((float)sensorValue / 1024) * 5.0; 
 float RS_gas = (5.0 - sensor_volt) / sensor_volt; 
 float ratio = RS_gas / R0; // ratio = RS/R0 
 
 Serial.println("sensor_volt RS_ratio Rs/R0"); 
 String data = String(sensor_volt, DEC)+ " " + String(RS_gas, DEC) + " " + String(ratio, DEC);
 Serial.println(data);
 delay(350); 
}