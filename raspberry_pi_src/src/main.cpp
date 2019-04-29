#include <interfaces/WifiConnectorIfc.hpp>
#include <wifi/WifiMngr.hpp>

using namespace interfaces;
using namespace wifi;

int main()
{
    WifiMngr wifiMngr;
    wifiMngr.open();
    return 0;
}
