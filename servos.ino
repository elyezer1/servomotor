#include <Servo.h>

Servo myServo;
void setup() 
{
myServo.attach(2);

}

void loop() 
{
   myServo.write(0);
  delay(100);
  myServo.write(180);
  delay(100);
}
