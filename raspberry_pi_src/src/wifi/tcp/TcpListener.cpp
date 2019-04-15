#include <wifi/tcp/TcpListener.hpp>

namespace wifi { namespace tcp {

TcpListener::TcpListener(TcpClient& tcpClient)
: tcpClient(tcpClient)
{}

void TcpListener::operator ()()
{

}

} } // wifi::tcp

