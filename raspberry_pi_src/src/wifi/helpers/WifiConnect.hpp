#pragma once

#include <wifi/helpers/WifiInfo.hpp>

#include <string>

namespace wifi { namespace tcp {
class TcpClient;
} } // wifi::tcp

namespace wifi { namespace helpers {

class WifiConnect
{
public:
    WifiConnect(tcp::TcpClient& tcpClient);
    ~WifiConnect() = default;
    
    WifiConnect(const WifiConnect&) = delete;
    WifiConnect& operator = (const WifiConnect&) = delete;
    WifiConnect(WifiConnect&&) = delete;
    WifiConnect& operator = (WifiConnect&&) = delete;
    
    void connect();

private:
    void readConfigFile();
    void getIp();
    void createConnection();

    WifiInfo wifiInfo;
    tcp::TcpClient& tcpClient;
};

} } // wifi::helpers

