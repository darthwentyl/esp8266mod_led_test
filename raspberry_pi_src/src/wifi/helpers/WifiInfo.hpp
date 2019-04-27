#pragma once

#include <string>

namespace wifi { namespace helpers {

struct WifiInfo 
{
    std::string ssid;
    std::string iw_interface;
    std::string ip;
};

} } // wifi::helpers
