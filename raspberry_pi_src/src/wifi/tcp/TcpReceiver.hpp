#pragma once

#include <netinet/in.h>
#include <string>

namespace wifi { namespace tcp {

class TcpReceiver
{
public:
    TcpReceiver(const int& socketFd, const struct sockaddr_in& address);
    std::string receive(const size_t& dataSize);

private:
    int socketFd;
    struct sockaddr_in address;
};

} } // wifi::tcp
