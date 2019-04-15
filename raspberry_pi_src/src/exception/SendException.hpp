/*
 * SendException.hpp
 *
 *  Created on: 30 gru 2017
 *      Author: mwendlan
 */

#include <stdexcept>

namespace exception {

class SendException : public std::runtime_error
{
public:
    SendException()
    : std::runtime_error(std::string("Send failure"))
    {}
};

} // exception
