#include <wifi/WifiConnector.hpp>
#include <wifi/helpers/WifiConnect.hpp>

#include <iostream>

namespace wifi {

using namespace helpers;

WifiConnector::WifiConnector() 
{
}

void WifiConnector::connect()
{
    try {
        WifiConnect wifiConnect;
        wifiConnect.connect();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void WifiConnector::disconnect()
{
}

} // wifi
