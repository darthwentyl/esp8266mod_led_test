#include <wifi/WifiMngr.hpp>
#include <wifi/WifiConnector.hpp>

#include <iostream>
#include <memory>

namespace wifi {

using namespace interfaces;
using namespace wifi;

WifiMngr::WifiMngr() :
socket(-1)
{}

void WifiMngr::open()
{
    try {
        std::unique_ptr<WifiConnectorIfc> wifiConnector = std::make_unique<WifiConnector>(tcpClient);
        wifiConnector->connect();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void WifiMngr::send(const std::string& command)
{
}

std::string WifiMngr::receive()
{
    return std::string();
}

void WifiMngr::close()
{
    try {
        std::unique_ptr<WifiConnectorIfc> wifiConnector = std::make_unique<WifiConnector>(tcpClient);
        wifiConnector->disconnect();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

} // wifi
