# Arduino-Light-Control
This project demonstrates how to control 3 LEDs using 3 push buttons with Arduino Uno.

## Project Objective
The goal of this project is to build a simple input-output control system using Arduino. 
Three push buttons are connected as inputs and three LEDs as outputs,
Each button when pressed turns on a different LED for a fixed delay.

## Components Used
- Arduino Uno  
- 3 LEDs (Red, Green, Blue)  
- 3 Push Buttons  
- 3 × 220Ω Resistors (for LEDs)  
- 3 × 10kΩ Resistors (for pull-down on buttons)  
- Breadboard  
- Jumper Wires

## How I Built It
1. I started by placing 3 LEDs (red, green, blue) on the breadboard.
2. Connected each LED to a 220Ω resistor and wired them to Arduino pins 8, 9, and 10.
3. Added 3 push buttons and connected them to pins 2, 3, and 4.
4. Each button was grounded through a 10kΩ pull-down resistor.
5. Wrote and uploaded the code using Arduino IDE.

## What I Learned
Working on this project gave me a better understanding of how input and output components interact in Arduino. 
Even though it’s a simple circuit, it helped me practice the core functions I’ll be using in future, more advanced projects.

- Use digitalRead() to detect button input
- Control LEDs with digitalWrite()
- Apply timing using delay() to manage how long outputs stay active
- Connect components properly on a breadboard and troubleshoot wiring issues

## Project Importance
This project introduces essential skills in working with Arduino, such as reading digital inputs, controlling outputs, using delays for timing, and assembling circuits using a breadboard.  
It plays an important role in building a strong foundation for more advanced applications such as traffic light systems and interactive electronics that respond to user actions.


## Arduino Code
// C++
```cpp
void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    digitalWrite(8, HIGH);
    delay(5000);
    digitalWrite(8, LOW);
  }

  if (digitalRead(3) == HIGH) {
    digitalWrite(9, HIGH);
    delay(5000);
    digitalWrite(9, LOW);
  }

  if (digitalRead(4) == HIGH) {
    digitalWrite(10, HIGH);
    delay(5000);
    digitalWrite(10, LOW);
  }
}
```
### Circuit Diagram
![Circuit](https://github.com/user-attachments/assets/6429ad5b-5aef-4e8b-8e43-4a9e42821fa3)

![LED1](https://github.com/user-attachments/assets/c542d441-f19e-4bc9-84a1-37c2add80d3b)
![LED2](https://github.com/user-attachments/assets/83c3ce5a-30b5-44d5-9c33-a7cd69a11249)
![LED3](https://github.com/user-attachments/assets/bb214e2f-32c1-4ae0-9621-af93c75bc1e3)
