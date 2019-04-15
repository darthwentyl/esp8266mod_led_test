/*
 * GetAddressException.hpp
 *
 *  Created on: 30 gru 2017
 *      Author: mwendlan
 */

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
