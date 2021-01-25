int pin = 5;
void setup()
{
  Serial.begin(9600); // To communicate with the serial monitor
  pinMode(pin, OUTPUT); // setting pin 5 as output
}
int k = 1;
void loop()
{
  digitalWrite(pin, HIGH); // Setting the output of pin 5 to high
  
  Serial.print("blinking for the ");
  Serial.print(k);
  Serial.println("th time");
  
  delay(2000); // Wait for 2000 millisecond(s) 
  
  digitalWrite(pin, LOW); // Setting the output of pin 5 to low
  
  Serial.println("Stopped..");
  
  delay(2000); // Wait for 2000 millisecond(s)
  
  k++;
}
