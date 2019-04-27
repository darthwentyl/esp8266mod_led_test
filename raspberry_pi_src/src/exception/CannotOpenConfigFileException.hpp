#pragma once

#include <stdexcept>

namespace exception {

class CannotOpenConfigFileException : public std::runtime_error
{
public:
    CannotOpenConfigFileException(const std::string& msg)
    : std::runtime_error(msg)
    {}
};

} // exception
