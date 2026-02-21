#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Shraddha Singh
 * @date 2026-02-21
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define touch sensor digital pin (Use pin 2)
int touchpin=2;
int ledpin=13;

 // TODO 2:
 // Create variable to store touch state
int state=digitalRead(touchpin);

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Configure touch pin as INPUT
    pinMode(touchpin,INPUT);
    pinMode(ledpin,OUTPUT);

    // TODO 5:
    // Print system initialization message
    Serial.println("Touch Detection System Initialized");
}

void loop() {

    // TODO 6:
    // Read digital value from touch sensor
    state=digitalRead(touchpin);

    // TODO 7:
    // If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"

    if(state==HIGH){
        Serial.println("Touch Detected");
        digitalWrite(ledpin,HIGH);
    }
    else{
        Serial.println("No Touch");
        digitalWrite(ledpin,LOW);
    }

    // TODO 8:
    // Add small delay (200–500ms)
    delay(500);

}
