#pragma once

#include <stdexcept>

namespace exception {

class ReceiveException : public std::runtime_error
{
public:
    ReceiveException()
    : std::runtime_error("Receive failure")
    {}
};

} // exception
