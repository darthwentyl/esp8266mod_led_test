#include <wifi/tcp/TcpSetup.hpp>
#include <exception/GetSocketException.hpp>
#include <exception/GetAddressException.hpp>
#include <exception/BindSocketException.hpp>

#include <sys/socket.h>
#include <arpa/inet.h>
#include <cstring>

namespace wifi { namespace tcp {

using namespace exception;

TcpSetup::TcpSetup(struct sockaddr_in& server, int& socketFd, const std::string& address, const int port)
: server(server)
, socketFd(socketFd)
, address(address)
, port(port)
{}

void TcpSetup::setup()
{
    socketFd = getSocket();
    setServerData();
    bindSocket();
}

int TcpSetup::getSocket()
{
    int localSocket = socket(AF_INET, SOCK_STREAM, 0);
    if(localSocket == -1)
    {
        throw GetSocketException();
    }
    return localSocket;
}

in_addr_t TcpSetup::getAddress()
{
    in_addr_t localAddress = inet_addr(address.c_str());
    if(localAddress == 0)
    {
        throw GetAddressException();
    }
    return localAddress;
}

void TcpSetup::bindSocket()
{
    struct sockaddr_in client;
    client.sin_family = AF_INET;
    client.sin_port = htons(54321);
    client.sin_addr.s_addr = htonl(INADDR_ANY); //getAddress();
    if(bind(socketFd, (struct sockaddr*)&client, sizeof(struct sockaddr_in)) == -1)
    {
        throw BindSocketException();
    }
}

void TcpSetup::setServerData()
{
    memset((char*)&server, 0, sizeof(server));
    server.sin_family = AF_INET;
    server.sin_port = htons(port);
    server.sin_addr.s_addr = htonl(INADDR_ANY); //getAddress();
}

} } // wifi::tcp

