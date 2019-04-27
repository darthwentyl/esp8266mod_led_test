#pragma once

namespace wifi { namespace helpers {

struct WifiInfo;

class WifiGetIp
{
public:
    WifiGetIp(WifiInfo& wifiInfo);

    void getIp();

private:
    WifiInfo& wifiInfo;
};

} } // wifi::helpers
