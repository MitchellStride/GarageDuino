int RELAY = 12;

void setup() {
delay(2000);
digitalWrite(RELAY, HIGH);
pinMode(RELAY, OUTPUT);
pinMode(13, INPUT);
delay(2000);
}

void loop() {
    if(digitalRead(13) == HIGH){
      digitalWrite(RELAY,LOW);
      delay(1000);
      digitalWrite(RELAY, HIGH);
    }
  
}

