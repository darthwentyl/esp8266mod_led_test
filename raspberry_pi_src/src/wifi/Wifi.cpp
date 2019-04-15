#include <wifi/Wifi.hpp>

#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <string>

#define IW_INTERFACE "wlan0"

namespace wifi {

Wifi::Wifi(const std::string& ssid) : 
ssid(ssid)
{
    memset(&wreq, 0, sizeof(struct iwreq));
    wreq.u.essid.length = IW_ESSID_MAX_SIZE+1;
    sprintf(wreq.ifr_name, IW_INTERFACE);
}

void Wifi::connect()
{
}

void Wifi::disconnect()
{
}

void Wifi::send(const std::string& data)
{
}

std::string Wifi::receive()
{
    return std::string();
}

} // wifi
