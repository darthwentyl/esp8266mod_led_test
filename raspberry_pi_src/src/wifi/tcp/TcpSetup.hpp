#pragma once

#include <string>
#include <netinet/in.h>

namespace wifi { namespace tcp {

class TcpSetup
{
public:
    TcpSetup(struct sockaddr_in& server, int& socketFd, const std::string& address, const int port);
    void setup();

private:
    int getSocket();
    void setServerData();
    in_addr_t getAddress();
    void bindSocket();

    struct sockaddr_in& server;
    int& socketFd;
    std::string address;
    int port;
};

} } // wifi::tcp
