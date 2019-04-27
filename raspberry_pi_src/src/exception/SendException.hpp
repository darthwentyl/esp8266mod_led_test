#pragma once

#include <stdexcept>

namespace exception {

class SendException : public std::runtime_error
{
public:
    SendException()
    : std::runtime_error(std::string("Send failure"))
    {}
};

} // exception
