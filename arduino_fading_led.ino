int ledPin = 5;
void setup() {
  
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {

    analogWrite(ledPin, fadeValue);
  
    Serial.print("Fading Value is ");
    Serial.println(fadeValue);
    
    delay(50); // delaying so that we can see the fading effect
  }
  
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin, fadeValue);
    
    Serial.print("Fading Value is ");
    Serial.println(fadeValue);
    
    delay(50);
  }
  delay(100);
}
