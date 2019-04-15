#pragma once

#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

namespace wifi { namespace tcp {

class TcpClient
{
public:
    TcpClient();
    ~TcpClient();

    bool send(const std::string& data);
    std::string receive(const size_t size);
    bool setup(const std::string& address, const int port);

private:
    int socket;
    struct sockaddr_in server;
};

} } // wifi::tcp
