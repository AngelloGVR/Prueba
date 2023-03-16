int pirPin = 6; 
int pirState;

void presence_setup() { 
  
} 

void presence_loop() { 
  pirState = digitalRead(pirPin); //read state of the PIR 
 
  if (pirState == LOW) { 
      Serial.println("No motion"); //if the value read is low, there  was no motion 
  } else { 
    Serial.println("Motion!"); //if the value read was high, there was motion 
  } 
 
  delay(500); 
}
