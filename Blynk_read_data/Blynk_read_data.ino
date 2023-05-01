#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "cTZbs9O6sh0gzXRA586harT5kfS0AxBZ";

char ssid[] = "Rumah_witjaksono";
char pass[] = "SarangEdii";

void setup(){
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);

  pinMode(A0, INPUT);
}

void loop(){
  Blynk.run();

  Blynk.virtualWrite(V1, analogRead(A0));
  Blynk.virtualWrite(V2, map(analogRead(A0), 0, 1024, 0, 100));
}