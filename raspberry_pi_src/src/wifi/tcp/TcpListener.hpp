#pragma once

#include <wifi/tcp/TcpClient.hpp>

namespace wifi { namespace tcp {

class TcpListener
{
public:
    TcpListener(TcpClient& tcpClient);

    void operator ()();

private:
    TcpClient& tcpClient;
};

} } // wifi::tcp
