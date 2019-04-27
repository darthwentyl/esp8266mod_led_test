#pragma once

#include <interfaces/WifiReceiverIfc.hpp>

namespace wifi {

class WifiReceiver : public interfaces::WifiReceiverIfc
{
public:
    ~WifiReceiver() = default;

    WifiReceiver(const WifiReceiver&) = delete;
    WifiReceiver& operator = (const WifiReceiver&) = delete;
    WifiReceiver(WifiReceiver&&) = delete;
    WifiReceiver& operator = (WifiReceiver&&) = delete;

    std::string receive() override;
};

} // wifi
