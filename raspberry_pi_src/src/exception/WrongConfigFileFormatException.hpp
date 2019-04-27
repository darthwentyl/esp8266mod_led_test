#pragma once

#include <stdexcept>

namespace exception {

class WrongConfigFileFormatException : public std::runtime_error
{
public:
    WrongConfigFileFormatException() 
    : std::runtime_error(std::string("Wrong config file format"))
    {}
};

} // exception
