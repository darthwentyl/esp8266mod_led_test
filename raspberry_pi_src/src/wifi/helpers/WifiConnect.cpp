#include <wifi/helpers/WifiConnect.hpp>
#include <wifi/helpers/ConfigFileReader.hpp>
#include <wifi/helpers/WifiGetIp.hpp>

#include <iostream>

#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/types.h> 
#include <linux/wireless.h>

namespace wifi { namespace helpers {

WifiConnect::WifiConnect()
{}

void WifiConnect::connect()
{
    try {
        readConfigFile();
        getIp();
        createConnection();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void WifiConnect::readConfigFile()
{
    ConfigFileReader reader;
    wifiInfo = reader.getWifiInfo();
}

void WifiConnect::getIp()
{
    WifiGetIp wifiGetIp(wifiInfo);
    wifiGetIp.getIp();
    std::cout << "ip: " << wifiInfo.ip << std::endl;
}

void WifiConnect::createConnection()
{
}

} } // wifi::helpers
