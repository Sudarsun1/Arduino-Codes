float detect;
float percent;
int trueDetect;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
trueDetect=analogRead(A0);
detect=(trueDetect/1023);
percent=100-(detect*100);
Serial.println(percent);
delay(350);
}
