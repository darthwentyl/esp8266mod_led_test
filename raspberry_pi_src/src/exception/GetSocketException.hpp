#pragma once

#include <stdexcept>

namespace exception {

class GetSocketException : public std::runtime_error
{
public:
    GetSocketException()
    : std::runtime_error(std::string("Get socket failure"))
    {}
};

} // exception
