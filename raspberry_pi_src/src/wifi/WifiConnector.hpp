#pragma once

#include <interfaces/WifiConnectorIfc.hpp>

namespace wifi {

class WifiConnector : public interfaces::WifiConnectorIfc
{
public:
    WifiConnector();
    ~WifiConnector() = default;
    
    WifiConnector(const WifiConnector&) = delete;
    WifiConnector& operator = (const WifiConnector&) = delete;
    WifiConnector(WifiConnector&&) = delete;
    WifiConnector& operator = (WifiConnector&&) = delete;
    
    void connect() override;
    void disconnect() override;
private:
};

} // wifi
