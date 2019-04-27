#pragma once

#include <wifi/helpers/WifiInfo.hpp>

#include <sstream>

namespace wifi { namespace helpers {

class ConfigFileReader
{
public:
    WifiInfo getWifiInfo();

private:
    void parseWifiInfo(WifiInfo& wifiInfo, std::stringstream& buffer);
};

} } // wifi::helpers
