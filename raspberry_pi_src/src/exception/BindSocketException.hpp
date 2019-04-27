#pragma once

#include <stdexcept>

namespace exception {

class BindSocketException : public std::runtime_error
{
public:
    BindSocketException()
    : std::runtime_error(std::string("Bind failure"))
    {}
};

} // exception
