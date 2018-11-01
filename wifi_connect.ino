#define BLYNK_PRINT Serial   
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "3fee3fdc72134e48ac4a78a86fb60dfc";

char ssid[] = "pulkit";
char pass[] = "12345677";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
