#include <ESP8266WiFi.h>

const char* ssid = "";
const char* password = "";

void setup()
{
    Serial.begin(115200);

    // We start by connecting to a WiFi network
    Serial.println();
    Serial.println();

    printMillis();
    Serial.print("Connecting to ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);

    Serial.println("");
    printMillis();
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

void printMillis() {
    Serial.print(millis());
    Serial.print(": ");
}

void loop()
{
    printMillis();
    Serial.println(WiFi.status());
    delay(1000);
}