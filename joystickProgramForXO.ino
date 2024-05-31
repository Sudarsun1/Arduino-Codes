int xPin = A1;
int yPin = A0;
int sPin = 8;
int xValue;
int yValue;
int switchPosition;
int dt=50;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xPin,INPUT);
pinMode(yPin,INPUT);
pinMode(sPin,INPUT);
digitalWrite(sPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xValue=analogRead(xPin);
yValue=analogRead(yPin);
switchPosition=digitalRead(sPin);
if((xValue >=0 )&&(xValue <=400)&&(yValue >= 0)&&(yValue <= 400)){
  Serial.print("1");
}
if((xValue >=401 )&&(xValue <= 600)&&(yValue >= 0)&&(yValue <= 400)){
  Serial.print("2");
}
if((xValue >= 600 )&&(xValue <=1050)&&(yValue >= 0)&&(yValue <= 400)){
  Serial.print("3");
}
if((xValue >=0 )&&(xValue <=400)&&(yValue >= 401)&&(yValue <= 600)){
  Serial.print("4");
}
if((xValue >= 401 )&&(xValue <= 600)&&(yValue >= 401)&&(yValue <= 600)){
  Serial.print("5");
}
if((xValue >= 601 )&&(xValue <= 1050)&&(yValue >= 401)&&(yValue <= 600)){
  Serial.print("6");
}
if((xValue >= 0 )&&(xValue <=400)&&(yValue >= 601)&&(yValue <= 1050)){
  Serial.print("7");
}
if((xValue >= 401 )&&(xValue <= 600)&&(yValue >= 601 )&&(yValue <= 1050)){
  Serial.print("8");
}
if((xValue >= 601 )&&(xValue <= 1050 )&&(yValue >= 601 )&&(yValue <= 1050)){
  Serial.print("9");
}
Serial.print(",");
Serial.println(switchPosition);
delay(dt);
}
