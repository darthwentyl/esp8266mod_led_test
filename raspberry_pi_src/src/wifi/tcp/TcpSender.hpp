#pragma once

#include <string>
#include <netinet/in.h>

namespace wifi { namespace tcp {

class TcpSender
{
public:
    TcpSender(const int& socketFd, const struct sockaddr_in& address);
    void send(const std::string& data);

private:
    int socketFd;
    struct sockaddr_in address;
};

} } // wifi::tcp
