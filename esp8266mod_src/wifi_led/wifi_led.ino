#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
 
const char *ssid = "darth_wentyl";
const char *password = "1234567890";
 
ESP8266WebServer server(80);

const char main_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
  <body>
    <center>
      <h1>WiFi LED control</h1><br>
      Click to turn <a href="ledOn">LED ON</a><br>
      Click to turn <a href="ledOff">LED OFF</a><br>
      <hr>
    </center>
  </body>
</html>
)=====";

#define LED 12

void handleRoot() {
  server.send(200, "text/html", main_page);
}

void handle_led_on() { 
 Serial.println("LED on page");
 digitalWrite(LED, LOW);
 server.send(200, "text/html", "LED is ON");
}
 
void handle_led_off() { 
 Serial.println("LED off page");
 digitalWrite(LED, HIGH);
 server.send(200, "text/html", "LED is OFF");
}

void setup() {
  Serial.begin(115200);
 
  WiFi.softAP(ssid, password);
 
  Serial.println();
  Serial.print("Server IP address: ");
  Serial.println(WiFi.softAPIP());
 
  server.on("/", handleRoot);
  server.on("/ledOn", handle_led_on);
  server.on("/ledOff", handle_led_off);
  server.begin();

  pinMode(LED, OUTPUT); 
  digitalWrite(LED, HIGH);
 
  Serial.println("Server listening");
}
 
void loop() {
  server.handleClient();
}
