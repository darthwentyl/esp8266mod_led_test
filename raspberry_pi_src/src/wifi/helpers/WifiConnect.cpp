#include <wifi/helpers/WifiConnect.hpp>
#include <wifi/helpers/ConfigFileReader.hpp>

#include <iostream>

#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/types.h> 
#include <linux/wireless.h>

namespace wifi { namespace helpers {

// memset(&wreq, 0, sizeof(struct iwreq));
// wreq.u.essid.length = IW_ESSID_MAX_SIZE+1;
// sprintf(wreq.ifr_name, IW_INTERFACE);

WifiConnect::WifiConnect()
{}

void WifiConnect::connect()
{
    readConfigFile();
    checkConnection();
    getIp();
    createConnection();
}

void WifiConnect::readConfigFile()
{
    try {
        ConfigFileReader reader;
        wifiInfo = reader.getWifiInfo();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void WifiConnect::checkConnection()
{
}

void WifiConnect::getIp()
{
}

void WifiConnect::createConnection()
{
}

} } // wifi::helpers
