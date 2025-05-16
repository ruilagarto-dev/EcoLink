#pragma once

class HostDiscovery{
    private:
        WiFiUDP udp;
        char host[16];

    public:
        HostDiscovery(WiFiUDP udpInstance) : udp(udpInstance);

        void begin();
        bool discoverHost();
        const char *getHost() const;
};