/*
    Project name : ESP8266 IR Transmiter Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-ir-transmiter-sensor
*/

#include <IRremoteESP8266.h>
#include <IRsend.h>

const int IR_LED_PIN = D2; // GPIO pin where the IR LED anode is connected

IRsend irsend(IR_LED_PIN); // Create an IRsend object

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Example: Sending a NEC protocol (standard TV remote) power ON signal
  unsigned int powerOnCode = 0x20DF10EF; // Replace with your IR code

  // Send the IR signal
  irsend.sendNEC(powerOnCode);

  Serial.println("IR signal sent.");
  delay(5000); // Delay 5 seconds before sending the next signal
}
