#include <stdexcept>
#include <iostream>
#include <unistd.h>

#include <wifi/tcp/TcpClient.hpp>
#include <wifi/tcp/TcpSetup.hpp>
#include <wifi/tcp/TcpSender.hpp>
#include <wifi/tcp/TcpReceiver.hpp>

namespace wifi { namespace tcp {

TcpClient::TcpClient()
: socket(-1)
{}

TcpClient::~TcpClient()
{
    if(socket != -1)
    {
        close(socket);
    }
}

bool TcpClient::send(const std::string& data)
{
    TcpSender sender(socket, server);
    try{
        sender.send(data);
    }
    catch(const std::runtime_error& e){
        std::cerr << e.what() << std::endl;
        return false;
    }
    return true;
}

std::string TcpClient::receive(const size_t size)
{
    TcpReceiver receiver(socket, server);
    std::string data = std::string();
    try{
        data = receiver.receive(size);
    }
    catch(const std::runtime_error& e){
        std::cerr << e.what() << std::endl;
    }
    return data;
}

bool TcpClient::setup(const std::string& address, const int port)
{
    TcpSetup tcpSetup(server, socket, address, port);
    try{
        tcpSetup.setup();
    }
    catch(const std::runtime_error& e){
        std::cerr << e.what() << std::endl;
        return false;
    }
    return true;
}

} } // wifi::tcp

