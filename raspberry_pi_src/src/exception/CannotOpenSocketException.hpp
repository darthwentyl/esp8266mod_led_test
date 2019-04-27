#pragma once

#include <stdexcept>

namespace exception 
{

class CannotOpenSocketException : public std::runtime_error
{
public:
    CannotOpenSocketException(const std::string& msg) 
    : std::runtime_error(msg)
    {}
};

} // exception
