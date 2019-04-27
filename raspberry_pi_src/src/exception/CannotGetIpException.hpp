#pragma once

#include <stdexcept>

namespace exception 
{

class CannotGetIpException : public std::runtime_error
{
public:
    CannotGetIpException(const std::string& msg)
    : std::runtime_error(msg)
    {}
};

} // exception
