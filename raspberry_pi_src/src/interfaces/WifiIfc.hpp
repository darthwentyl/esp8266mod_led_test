#include <string>

namespace interfaces {

class WifiIfc
{
public:
    virtual ~WifiIfc() = default;
    
    virtual void connect() = 0;
    virtual void disconnect() = 0;
    virtual void send(const std::string& data) = 0;
    virtual std::string receive() = 0;
};

} // interfaces
