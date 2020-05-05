#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>
char ssid[] ="Hello"; 
char wifiPassword[] ="network1";
int i=0;
// Cayenne authenticati on info. This should be obtained from the Cayenne Dashboard.
char username[] = "27616e30-41c9-11ea-a38a-d57172a4b4d4";
char password[] = "d73f87e6a6498ac0d8e2534eeeafbbca743da484";
char clientID[] = "487090b0-41c9-11ea-ba7c-716e7f5ba423";

 void setup() {
  // put your setup code here, to run once:
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  Serial.begin(9600);
Cayenne.begin(username, password, clientID, ssid, wifiPassword);

}


   
 void loop() 
{
   Cayenne.loop();
  if(Serial.available()>0)
{
  char red1=Serial.read();delay(100);

if(red1=='L')
{
float sen1=Serial.parseFloat();
  Cayenne.virtualWrite(1,sen1);delay(100);
}
if(red1=='V')
{
  float sen2=Serial.parseFloat();
  Cayenne.virtualWrite(2,sen2);delay(100);
}
}
}



CAYENNE_IN(3)
{

for(int i=0;i<=5;i++)
{
 digitalWrite(D6,HIGH);
 digitalWrite(D5,LOW);
 delay(1000);
  digitalWrite(D5,HIGH);
 digitalWrite(D6,LOW);
 delay(1000);
 if(i==4)
 {
  digitalWrite(D5,LOW);
 digitalWrite(D6,LOW);
  break;
 }
}
  
}
