#pragma once

#include <WiFi.h>


class WiFiManager{
    private:
        const char *ssid;
        const char *password;
        uint8_t retryCount;
        const uint8_t maxRetries = 5;

    public:
        WiFiManager(const char *ssid, const char *password);
        bool connect();
        bool isConnected() const;
};