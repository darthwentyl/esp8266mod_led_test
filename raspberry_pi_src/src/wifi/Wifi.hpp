#include <interfaces/WifiIfc.hpp>

namespace wifi {

class Wifi : public interfaces::WifiIfc
{
public:
    Wifi(const std::string& ssid);
    ~Wifi() = default;
    
    Wifi(const Wifi&) = delete;
    Wifi& operator = (const Wifi&) = delete;
    Wifi(Wifi&&) = delete;
    Wifi& operator = (Wifi&&) = delete;
    
    void connect() override;
    void disconnect() override;
    void send(const std::string& data) override;
    std::string receive() override;
    
private:
    std::string ssid;
    
};

} // wifi
