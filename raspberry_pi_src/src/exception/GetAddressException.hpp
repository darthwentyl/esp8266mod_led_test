#pragma once

#include <stdexcept>

namespace exception {

class GetAddressException : public std::runtime_error
{
public:
    GetAddressException()
    : std::runtime_error(std::string("inet_addr return -1"))
    {}
};

} // exception
