#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>

#define LED 12

const char *ssid = "darth_wentyl";
const char *password = "1234567890";

WiFiServer server(8888);
WiFiClient client;

bool isLedOn = false;

void setup() {
  Serial.begin(115200);
  
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);  

  Serial.println();
  Serial.print("Server IP address: ");
  Serial.println(WiFi.softAPIP());

  pinMode(LED, OUTPUT); 
  digitalWrite(LED, HIGH);

  server.begin();
  Serial.println("Wait for tcp client connection");
}

void loop() {
  if (!client.connected()) {
    client = server.available();
    delay(100);
    if (isLedOn) {
      digitalWrite(LED, HIGH);
      isLedOn = !isLedOn;
    } else {
      digitalWrite(LED, LOW);
      isLedOn = !isLedOn;
    }
  } else {
    if (client.available() > 0) {
      Serial.print((char)client.read());
    }
  }
}

