
#include<Wire.h>
int LED1=12;
int LED2=13;
int b;
int wait=2000;
#include <LiquidCrystal.h>

LiquidCrystal lcd(10, 11, 5, 4, 3, 2);



void setup()
{
lcd.begin(16, 2);
  
pinMode(LED1,OUTPUT);                               // put your setup code here, to run once:

pinMode(LED2,OUTPUT);

Serial.begin(9600);
}

void receiveEvent(int bytes) 
{
  b = Wire.read();
}
  
int c=0;
void loop()
{  
  if (c==0)
   {
   delay(200);
   c++;
   }

Wire.begin(8);

Wire.onReceive(receiveEvent);
                    //receiveEvent(x);

Serial.print("y recieved to b");
Serial.println(b);
  lcd.setCursor(0,0);
  lcd.print(b);

 if (b == 0) {
    digitalWrite(LED1, HIGH);
    delay(wait);
    digitalWrite(LED1, LOW);
    delay(wait);
    Serial.println("b done0");
 }
else if (b == 1) {
    digitalWrite(LED2, HIGH);
    delay(wait);
    digitalWrite(LED2, LOW);
    delay(wait);
    Serial.println("b done1");
 }
else {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    delay(wait);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    delay(wait);
    Serial.println("b done else");
 } 
lcd.clear();                                // put your main code here, to run repeatedly:

}
