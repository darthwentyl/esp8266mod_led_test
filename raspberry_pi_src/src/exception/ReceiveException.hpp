/*
 * ReceiveException.hpp
 *
 *  Created on: 8 sty 2018
 *      Author: mwendlan
 */

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
