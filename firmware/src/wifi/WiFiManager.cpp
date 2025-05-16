#include "WiFiManager.h"


WiFiManger::WiFiManager(const char *ssid, const char *password){
    this->ssid = ssid;
    this->password = password;
    this->retryCount = 0;
}

bool WiFiManger::connect(){
    WiFi.mode(WIFI_STA);

    while(this->retryCount < this->maxRetries){
        WiFi.begin(this->ssid, this->password);

        unsigned long start = millis();

        while(!isConnected() && (millis() - start) <  10000);

        if(isConneted()){
            this->retryCoun = 0;
            return true;
        }

        this->retryCoun++;
    }

    return false;
}

bool WiFiManager::isConnected() const {
  return WiFi.status() == WL_CONNECTED;
}
