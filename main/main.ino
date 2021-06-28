
// tested with ESP8266 Wemos D1 mini 
// the Data Pin -> datasheet

#define pin 5

void setup(){
  pinMode(pin, OUTPUT);
 
}

void loop(){
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
  
}
