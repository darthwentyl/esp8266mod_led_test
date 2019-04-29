#pragma once

#include <iostream>
#include <string>

namespace wifi { namespace helpers {

struct WifiInfo 
{
    std::string ssid;
    std::string iw_interface;
    std::string ip;
    int port = -1;
};

std::ostream& operator << (std::ostream& output, const WifiInfo& wifiInfo);

} } // wifi::helpers
