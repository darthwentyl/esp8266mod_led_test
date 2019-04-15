#include <sys/socket.h>
#include <memory>
#include <cstdlib>
#include <cstring>

#include <wifi/tcp/TcpReceiver.hpp>
#include <exception/ReceiveException.hpp>

namespace wifi { namespace tcp {

using namespace exception;

static socklen_t socketLength = sizeof(struct sockaddr_in);

TcpReceiver::TcpReceiver(const int& socketFd, const struct sockaddr_in& address)
: socketFd(socketFd)
, address(address)
{}

std::string TcpReceiver::receive(const size_t& dataSize)
{
    std::unique_ptr<char[]> data(new char[dataSize]);
    memset((void*)data.get(), 0, dataSize);
    if(recvfrom(socketFd, data.get(), dataSize, 0, (struct sockaddr*)&address, &socketLength ) < 0)
    {
        throw ReceiveException();
    }
    return std::string(data.get());

}

} } // wifi::tcp

