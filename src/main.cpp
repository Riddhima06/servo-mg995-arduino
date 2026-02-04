#include <Arduino.h>
#include <Servo.h>
Servo myServo;
void setup() {
    Serial.begin(9600);
    myServo.attach(10);
    Serial.println("Servo initiate");

// write your initialization code here
}

void loop() {
    for (int angle = 0; angle <= 180; angle += 10) {
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.println(angle);
        delay(500);
    }

    for (int angle = 180 ; angle >= 0 ; angle -= 10) {
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.println(angle);
        delay(500);
    }
    // myServo.write(0);
    // delay(500);
    // myServo.write(90);
    // delay(500);
    // myServo.write(120);
    // delay(500);
    // myServo.write(180);
    // delay(500);

// write your code here
}