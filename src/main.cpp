#include <Arduino.h>

#define sensorPin 7
#define mosfetPin 8

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(mosfetPin, OUTPUT);
  digitalWrite(mosfetPin, LOW);
}

bool lastPump = false;
unsigned long lastPumpTime = 0;

void loop() {
  if(digitalRead(sensorPin) == 0 && lastPump == false && (millis() - lastPumpTime) >= 1500){
    digitalWrite(mosfetPin, HIGH);
    delay(300);
    digitalWrite(mosfetPin, LOW);

    lastPump = true;
    lastPumpTime = millis();
  }
  if(digitalRead(sensorPin) == 1){
    lastPump = false;
    digitalWrite(mosfetPin, LOW);
  }
}

