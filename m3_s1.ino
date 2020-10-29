
#include <Wire.h>                                                   // Define Slave answer size
int x;

void setup() {

  Serial.begin(9600);
  Serial.println("I2C slave1 Demonstration");
}

void loop() {
  Serial.println("one loop started");

  for (x = 0; x <= 2; x++)
  {
    Wire.begin(9);
    Wire.onRequest(requestEvent);                       //receiveEvent(x);
    delay(1000);
  }
  Serial.println("one loop completed");
}

void requestEvent()
{
  Wire.write(x);
  Serial.println("x sent to master ");
  Serial.println(x);
}
