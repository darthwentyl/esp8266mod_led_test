#pragma once

#include <wifi/tcp/TcpClient.hpp>

#include <string>

namespace wifi {

class WifiMngr 
{
public:
    WifiMngr();
    ~WifiMngr() = default;

    WifiMngr(const WifiMngr&) = delete;
    WifiMngr& operator = (const WifiMngr&) = delete;
    WifiMngr(WifiMngr&&) = delete;
    WifiMngr& operator = (WifiMngr&&) = delete;
    
    void open();
    void send(const std::string& command);
    std::string receive();
    void close();

private:
    int socket;
    tcp::TcpClient tcpClient;
};

} // wifi
