#pragma once

#include <interfaces/WifiSenderIfc.hpp>

namespace wifi {

class WifiSender : public interfaces::WifiSenderIfc
{
public:
    ~WifiSender() = default;

    WifiSender(const WifiSender&) = delete;
    WifiSender& operator = (const WifiSender&) = delete;
    WifiSender(WifiSender&&) = delete;
    WifiSender& operator = (WifiSender&&) = delete;

    void send(const std::string& data) override;
};

} // wifi
