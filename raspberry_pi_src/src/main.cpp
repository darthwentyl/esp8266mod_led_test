#include <interfaces/WifiConnectorIfc.hpp>
#include <wifi/WifiConnector.hpp>

#include <memory>

using namespace interfaces;
using namespace wifi;

int main()
{
    std::unique_ptr<WifiConnectorIfc> wifiConnector = std::make_unique<WifiConnector>();
    wifiConnector->connect();
    return 0;
}
