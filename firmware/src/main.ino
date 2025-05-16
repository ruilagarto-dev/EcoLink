#include "communication/ServerClient.h"
#include "discovery/HostDiscovery.h"
#include "wifi/WiFiManager.h"
#include "gps/GPSManager.h"


const char *ssid = " ";
const char *password = " ":


const int baudRate = 115200;


WiFiManager wifiManager(ssid, password);


void setup(){
    Serial.begin(baudRate);


}