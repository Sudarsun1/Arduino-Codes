#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int i;
int k=0;
String Data;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int dataSize;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()==0){

}
Data=Serial.readStringUntil('\r');

lcd.clear();
lcd.setCursor(0,0);
lcd.print(Data);

}
