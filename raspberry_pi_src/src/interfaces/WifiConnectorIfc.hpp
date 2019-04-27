#pragma once

#include <string>

namespace interfaces {

class WifiConnectorIfc
{
public:
    virtual ~WifiConnectorIfc() = default;
    
    virtual void connect() = 0;
    virtual void disconnect() = 0;
};

} // interfaces
