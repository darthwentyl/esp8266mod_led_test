#pragma once

#include <string>

namespace interfaces {

class WiFiReceiverIfc
{
public:
    virtual ~WiFiReceiverIfc() = default;
    
    virtual std::string receive() = 0;
};

} // interfaces
