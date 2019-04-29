#include <wifi/WifiConnector.hpp>
#include <wifi/helpers/WifiConnect.hpp>
#include <wifi/tcp/TcpClient.hpp>

#include <iostream>

namespace wifi {

using namespace helpers;
using namespace tcp;

WifiConnector::WifiConnector(TcpClient& tcpClient)
: tcpClient(tcpClient)
{
}

void WifiConnector::connect()
{
    try {
        WifiConnect wifiConnect(tcpClient);
        wifiConnect.connect();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void WifiConnector::disconnect()
{
    try {
        tcpClient.disconnect();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

} // wifi
