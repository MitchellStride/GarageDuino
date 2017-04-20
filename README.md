
## Purpose
  An IOT garage door opener controlled by my phone.

## BOM
  - NodeMCU ESP8266 development board
  - Relay
  - Arduino Uno R3 (Relay I had needed 5V logic)

## Plan
  To host a web server on the esp8266 wifi chip so when I pull into the driveway
  in my car, my phone would automatically connect to the wifi and I could navigate
  to the boards IP and open the garage door. The web server will have a login and
  a push button which will trigger GPIO5 on the esp8266 board. This will trigger
  the relay, opening the garage door.

## Wiring
The Arduino powers the esp8266 board and it waits for the signal from the webpage. I needed the Arduino because when booting the signals on the esp8266 dev board flickered so I used the Arduino as a safety and also the relay I own operated on 5V logic.

<img src="{{ "/pictures/fritzing.png" | prepend: site.baseurl }}" />

The relay was then hooked up to the two terminals on the back of the garage door
button. I used the normally open terminal on the relay.

<img src="{{ "/pictures/garagebutton.jpeg?raw=true" | prepend: site.baseurl }}" />

## Code

  The first version just hosted a webserver with a button that opened the garage door.

## Blynk

I came across this application called Blynk and decided to test it on this project. The application was neat because setup was easy and it allowed me to easily share the application with my housemates so everyone can now open the garage door via their cell phones.

<img alt="project2" src="{{ "/pictures/blynkss.png?raw=true" | prepend: site.baseurl }}" />

  This is the code on the UNO waiting for the blynk signal

  ```
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
  ```
