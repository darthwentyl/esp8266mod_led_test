#include <wifi/Wifi.hpp>

namespace wifi {

Wifi::Wifi(const std::string& ssid) : 
ssid(ssid)
{}

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
