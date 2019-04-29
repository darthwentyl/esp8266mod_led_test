#include <wifi/helpers/WifiConnect.hpp>
#include <wifi/helpers/ConfigFileReader.hpp>
#include <wifi/helpers/WifiGetIp.hpp>
#include <wifi/tcp/TcpClient.hpp>

#include <iostream>

#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/types.h> 
#include <linux/wireless.h>

namespace wifi { namespace helpers {

using namespace tcp;

WifiConnect::WifiConnect(TcpClient& tcpClient)
: tcpClient(tcpClient)
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
}

void WifiConnect::createConnection()
{
    std::cout << wifiInfo << std::endl;
    tcpClient.setup(wifiInfo.ip, wifiInfo.port);
}

} } // wifi::helpers
