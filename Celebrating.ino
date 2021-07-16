#include <Servo.h>
Servo servo1; // Define Servos from the library
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
void setup()
{
  servo1.attach(11); // Arduino pins configuration
  servo2.attach(12);
  servo3.attach(13);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
}
void loop()
{
  servo1.write(0); // celebrating - right arm and left arm is up then down but elbow is always up
  servo2.write(90);
  servo3.write(90);
  servo4.write(0);
  servo5.write(90);
  servo6.write(90);
  delay(3000);
  servo1.write(0);
  servo2.write(90);
  servo3.write(180);
  servo4.write(0);
  servo5.write(90);
  servo6.write(180);
  delay(3000); 
  
}
