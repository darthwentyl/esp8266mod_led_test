#pragma once

#include <wifi/helpers/WifiInfo.hpp>

#include <string>

namespace wifi { namespace helpers {

class WifiConnect
{
public:
    WifiConnect();
    ~WifiConnect() = default;
    
    WifiConnect(const WifiConnect&) = delete;
    WifiConnect& operator = (const WifiConnect&) = delete;
    WifiConnect(WifiConnect&&) = delete;
    WifiConnect& operator = (WifiConnect&&) = delete;
    
    void connect();

private:
    void readConfigFile();
    void checkConnection();
    void getIp();
    void createConnection();

    WifiInfo wifiInfo;
};

} } // wifi::helpers
