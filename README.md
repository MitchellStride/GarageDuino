# GarageDuino

## Purpose
  A garage door opener controlled by my phone.

## BOM
  - NodeMCU ESP8266 development board
  - Relay
  - Arduino Uno R3 (Relay I had needed 5V logic)

## Plan
  To host a web server on the esp8266 wifi chip so when I pull into the driveway
  in my car my phone would automatically connect to the wifi and I could navigate
  to the boards IP and open the garage door. The web server will have a login and
  a push button which will trigger GPIO5 on the esp8266 board. This will trigger
  the relay, opening the garage door.

## Wiring

![Alt text](/MitchellStride/GarageDuino/blob/master/pictures/fritzing.pngraw=true "Wiring Diagram")

## Code
## Blynk
