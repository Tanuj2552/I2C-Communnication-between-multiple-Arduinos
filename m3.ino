#include <Wire.h> 
int y;              // Define Slave answer size
void setup()
{
  Serial.begin(9600);
  Wire.begin();
  Serial.println("I2C Master Demonstration");
  delay(150);
}

 void loop()
 {
   Serial.println("OK");
   Wire.requestFrom(9,1);
   
   while(Wire.available()){
   int y = Wire.read();
    
   Serial.print("y value is  ");
   Serial.println(y);
  
   Wire.beginTransmission(8);
                                              // Wire.write("x=");
   Wire.write(y);

   Wire.endTransmission();
   Serial.println("y sent to slave2");
   delay(4000);
   }
 }
