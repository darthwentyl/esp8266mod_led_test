/*
 * BindSocketException.hpp
 *
 *  Created on: 8 sty 2018
 *      Author: mwendlan
 */

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
