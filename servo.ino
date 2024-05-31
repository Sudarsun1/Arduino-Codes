#include<Servo.h>
int servoPin1 = 11;
int servoPin2 = 9;
int servoPin3 = 6;
int servoPin4 = 3;
//int potPin = A0;
int servoPosB = 100;
int servoPosFr = 0;
int servoPosG = 140;
int servoPosA = 130;
//float potValue;
Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo1.attach(servoPin1);
myServo2.attach(servoPin2);
myServo3.attach(servoPin3);
myServo4.attach(servoPin4);
//pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//potValue=analogRead(A0);
//servoPos=int((.175/.1023)*(potValue/10));
//Serial.print("potValue = ");
//Serial.print(potValue);
//Serial.print("    ");
//Serial.print("servo position = ");
//Serial.println(servoPosB);
myServo1.write(servoPosB);
myServo2.write(servoPosFr);
myServo3.write(servoPosG);
myServo4.write(servoPosA);
//delay(200);
}
