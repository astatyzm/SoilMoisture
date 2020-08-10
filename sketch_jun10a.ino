

void setup(){
Serial.begin(9600);
}
 
void loop() {
  // 1023 = max > humidity = 0 %
  // 0 = min > humidity = 100%
int sensorReading= analogRead(A0); 
int val = -0.097 * sensorReading+100;
Serial.print("odczyt = ");
Serial.print (sensorReading); 
Serial.print(" val = ");
Serial.print ( val); 
Serial.println("%"); 
delay(1000);


}
