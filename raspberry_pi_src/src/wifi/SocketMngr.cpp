#include <wifi/SocketMngr.hpp>
#include <exception/CannotOpenSocket.hpp>
#include <exception/WrongWifiEssid.hpp>

namespace wifi {

SocketMngr::SocketMngr() :
socket(-1)
{}

void SocketMngr::open()
{    
}

void SocketMngr::send(const std::string& command)
{
}

std::string SocketMngr::receive()
{
    return std::string();
}

} // wifi
