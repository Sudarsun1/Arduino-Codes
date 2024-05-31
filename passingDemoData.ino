int count = 1;
int dtime = 1000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(count);
Serial.println(" sheep");
count++;
delay(dtime);
}
