#include <wifi/helpers/ConfigFileReader.hpp>

#include <exception/CannotOpenConfigFileException.hpp>

#include <iostream>
#include <fstream>
#include <string>

namespace wifi { namespace helpers {

using namespace exception;

// TODO: It should be parameterized.
const std::string PATH_CONFIG_FILE = "../src/wifi/helpers/config.txt";

WifiInfo ConfigFileReader::getWifiInfo()
{
    WifiInfo wifiInfo;

    std::ifstream configFile(PATH_CONFIG_FILE);
    if(configFile)
    {
        std::stringstream buffer;
        buffer << configFile.rdbuf();
        parseWifiInfo(wifiInfo, buffer);
    }
    else
    {
        std::string msg = "Cannot open config file from " + PATH_CONFIG_FILE;
        throw CannotOpenConfigFileException(msg);
    }
    
    return wifiInfo;
}

void ConfigFileReader::parseWifiInfo(WifiInfo& wifiInfo, std::stringstream& buffer)
{
    buffer >> wifiInfo.iw_interface
           >> wifiInfo.ssid;
}

} } // wifi::helpers
