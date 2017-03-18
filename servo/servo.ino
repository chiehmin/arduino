#include <Servo.h>

Servo servoX, servoY;

const byte pinX = 8, pinY = 9;

void setup()
{
	servoX.attach(pinX);
	servoY.attach(pinY);
}

void loop()
{
	servoX.write(0);
	servoY.write(0);
	delay(2000);
	servoX.write(180);
	servoY.write(180);
	delay(2000);
}
