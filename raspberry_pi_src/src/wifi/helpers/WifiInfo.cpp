#include <wifi/helpers/WifiInfo.hpp>

namespace wifi { namespace helpers {

std::ostream& operator << (std::ostream& output, const WifiInfo& wifiInfo)
{
    return output << "Ssid:         " << wifiInfo.ssid << std::endl
                  << "Iw_interface: " << wifiInfo.iw_interface << std::endl
                  << "Ip:           " << wifiInfo.ip << std::endl
                  << "Port:         " << wifiInfo.port << std::endl;
}

} } // wifi::helpers
