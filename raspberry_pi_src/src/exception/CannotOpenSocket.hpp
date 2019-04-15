#include <stdexcept>
#include <string>

namespace exception 
{

class CannotOpenSocket : public std::runtime_error
{
public:
    CannotOpenSocket(const std::string& msg) :
        std::runtime_error(msg)
    {}
};

} // exception
