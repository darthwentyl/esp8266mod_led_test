#include <sys/socket.h>

#include <exception/SendException.hpp>
#include <wifi/tcp/TcpSender.hpp>

namespace wifi { namespace tcp {

using namespace exception;

static const socklen_t socketLength = sizeof(struct sockaddr_in);

TcpSender::TcpSender(const int& socketFd, const struct sockaddr_in& address)
: socketFd(socketFd)
, address(address)
{}

void TcpSender::send(const std::string& data)
{
    if(sendto(socketFd, data.c_str(), data.size(), 0, (struct sockaddr*)&address, socketLength) == -1)
    {
        throw SendException();
    }
}

} } // wifi::tcp

