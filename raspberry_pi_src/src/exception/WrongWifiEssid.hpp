#include <stdexcept>
#include <string>

namespace exception 
{

class WrongWifiEssid : public std::runtime_error
{
public:
    WrongWifiEssid(const std::string& msg) :
        std::runtime_error(msg)
    {}
};

} // exception
