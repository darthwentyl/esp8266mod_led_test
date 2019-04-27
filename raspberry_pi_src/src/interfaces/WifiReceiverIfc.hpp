#pragma once

#include <string>

namespace interfaces {

class WifiReceiverIfc
{
public:
    virtual ~WifiReceiverIfc() = default;
    
    virtual std::string receive() = 0;
};

} // interfaces
