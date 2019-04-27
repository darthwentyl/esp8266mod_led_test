#pragma once

#include <stdexcept>

namespace exception 
{

class WrongWifiEssidException : public std::runtime_error
{
public:
    WrongWifiEssidException(const std::string& msg) 
    : std::runtime_error(msg)
    {}
};

} // exception
