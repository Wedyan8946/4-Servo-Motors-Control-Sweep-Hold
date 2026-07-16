# 🚀 4 Servo Motors Control (Sweep & Hold)
Arduino project to control 4 servo motors to perform a sweep action for exactly 2 seconds and then hold at a 90-degree angle.

---
## 📌 Project Description
In this task, 4 servo motors are programmed and wired with an Arduino Uno to achieve the following:
* Sweep Motion: The four motors move synchronously back and forth for exactly 2 seconds.
* Hold Motion: Once the 2-second duration ends, all motors move to and stay at a 90-degree angle (the exact center position) and hold their position.

To achieve maximum precision, delay(5) is used inside the code to divide the sweep steps so that the entire animation lasts exactly 2 seconds.

---

## 🔌 Circuit Diagram
The circuit was designed and simulated on Tinkercad to ensure safe wiring and shared power distribution for both Ground (GND) and Power (5V).

---

## 💻 Arduino Code
#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup()
{
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  
  for(int i=0;i<=180;i++)
  {
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    delay(5);
  }
  
  for(int i=180;i>=0;i--)
  {
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
     delay(5);
  }
  
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
  
}

void loop(){
}
