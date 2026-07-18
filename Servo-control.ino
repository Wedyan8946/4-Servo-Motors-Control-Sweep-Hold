#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

  // Sweep from 0 to 180 degrees
  for (int i = 0; i <= 180; i++) {
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    delay(5);
  }

  // Sweep back from 180 to 0 degrees
  for (int i = 180; i >= 0; i--) {
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    delay(5);
  }

  // Hold at 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {
  // Keep empty to hold the position
}
