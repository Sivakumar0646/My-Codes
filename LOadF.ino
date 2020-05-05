#include<LiquidCrystal.h>
LiquidCrystal Lcd(8,9,10,11,12,13);
void setup()
{
  
 Serial.begin(9600);                   
 Lcd.begin(16,2);
 Lcd.setCursor(0,0);
 Lcd.print("Welcome...");
 delay(1000);
 Lcd.clear();
 pinMode(5,OUTPUT);
 digitalWrite(5,LOW);
}

void loop() {
int a=analogRead(A0);
Lcd.setCursor(0,0);
Lcd.print(analogRead(A0));
 delay(500);

// Serial.print('L');delay(100);
 //Serial.print('a');
 //delay(500);//
 //Serial.print('g');
 //Serial.println("  ");
// delay(500);
Lcd.setCursor(5,0);
Lcd.print("ML:");
 if(a<=225) 
 {
  Serial.println('a');
  Lcd.setCursor(9,0);
Lcd.print("0   ");
 
 digitalWrite(5,HIGH);
 Lcd.setCursor(0,1);
Lcd.print("Change bottle");
 }
else if(a>=230 && a<=245)
 {
  Serial.println('b');
  Lcd.setCursor(9,0);
Lcd.print("100   ");
 //delay(500);
 Lcd.setCursor(0,1);
Lcd.print("                 ");
 digitalWrite(5,HIGH);
 delay(500);
 digitalWrite(5,LOW);
 delay(500);
 }
else if(a>=245 && a<=265)
 {
  Serial.println('c');
 Lcd.setCursor(9,0);
Lcd.print("200   ");
 Lcd.setCursor(0,1);
Lcd.print("                 ");
 }
else if(a>=265 && a<=290)
 {
  Serial.println('d');
  Lcd.setCursor(9,0);
Lcd.print("300   ");
 //delay(500);
 digitalWrite(5,LOW);
  Lcd.setCursor(0,1);
Lcd.print("                 ");
 }
else if(a>=290 && a<=305)
 {
  Serial.println('e');
 Lcd.setCursor(9,0);
Lcd.print("400   ");
 //delay(500);
 digitalWrite(5,LOW);
  Lcd.setCursor(0,1);
Lcd.print("                 ");
 }
else if(a>=305)
 {
  Serial.println('f');
 Lcd.setCursor(9,0);
Lcd.print("500   ");
// delay(500);
 digitalWrite(5,LOW);
  Lcd.setCursor(0,1);
Lcd.print("                 ");
 }

 
 
}

  
