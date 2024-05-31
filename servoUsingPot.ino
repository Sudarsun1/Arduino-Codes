#include<Servo.h>
int servoPinA = 9;
int servoPinB = 3;
int servoPinF = 5;
int servoPinG = 11;
int potPinA = A0;
int potPinBase = A2;
int potPinFr = A5;
int swPin=7;
int altitude;
int fab;
int basement;
int grab;
int potValueA;
int potValueB;
int potValueF;
int swValue;
Servo myServoA;
Servo myServoB;
Servo myServoF;
Servo myServoG;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServoA.attach(servoPinA);
myServoB.attach(servoPinB);
myServoF.attach(servoPinF);
myServoG.attach(servoPinG);
pinMode(potPinA,INPUT);
pinMode(potPinBase,INPUT);
pinMode(potPinFr,INPUT);
pinMode(swPin,INPUT);
}

void loop() {
//put your main code here, to run repeatedly:
potValueA=analogRead(potPinA);
potValueF=analogRead(potPinFr);
potValueB=analogRead(potPinBase);
swValue=digitalRead(swPin);
altitude=int((.180/.1023)*(potValueA/10));
fab=int((.180/.1023)*(potValueF/10));
basement=int((.180/.1023)*(potValueB/10));
if(altitude<=70){
  altitude=70;
}
if(altitude>=180){
  altitude=180;
}
if(fab<=10){
  fab=10;
}
if(fab>=160){
  fab=160;
}
if(swValue==1){
grab=170;
}
if(swValue==0){
  grab=40;
}
myServoA.write(altitude);
myServoB.write(basement);
myServoF.write(fab);
myServoG.write(grab);
delay(100);
}

