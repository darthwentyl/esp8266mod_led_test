/*
 * ConnectionException.hpp
 *
 *  Created on: 30 gru 2017
 *      Author: mwendlan
 */

#pragma once

#include <stdexcept>

namespace exception {

class ConnectionException : public std::runtime_error
{
public:
    ConnectionException()
    : std::runtime_error(std::string("Connection failure"))
    {}
};

} // exception
