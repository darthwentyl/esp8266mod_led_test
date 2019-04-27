#pragma once

#include <string>

namespace interfaces {

class WifiSenderIfc
{
public:
    virtual ~WifiSenderIfc() = default;

    virtual void send(const std::string& data) = 0;
};

} // interfaces
