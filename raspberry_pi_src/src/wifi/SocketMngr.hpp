#pragma once

#include <string>

namespace wifi {

class SocketMngr 
{
public:
    SocketMngr();
    ~SocketMngr() = default;
    
    SocketMngr(const SocketMngr&) = delete;
    SocketMngr& operator = (const SocketMngr&) = delete;
    SocketMngr(SocketMngr&&) = delete;
    SocketMngr& operator = (SocketMngr&&) = delete;
    
    void open();
    void send(const std::string& command);
    std::string receive();
    
private:
    int socket;
};

} // wifi
