#pragma once

#include <string>

namespace interfaces {

class WiFiSenderIfc
{
public:
    virtual ~WifiSenderIfc() = default;

    virtual void send(const std::string& data) = 0;
};

} // interfaces
