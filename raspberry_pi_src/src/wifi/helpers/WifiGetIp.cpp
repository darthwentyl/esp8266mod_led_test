#include <wifi/helpers/WifiGetIp.hpp>
#include <wifi/helpers/WifiInfo.hpp>

#include <exception/CannotGetIpException.hpp>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <linux/wireless.h>

#include <iostream>
#include <sstream>

namespace wifi { namespace helpers {

using namespace exception;

WifiGetIp::WifiGetIp(WifiInfo& wifiInfo)
: wifiInfo(wifiInfo)
{}

void WifiGetIp::getIp()
{
    int fd = 0;
    struct ifreq ifr;

    fd = socket(AF_INET, SOCK_DGRAM, 0);
    
    ifr.ifr_addr.sa_family = AF_INET;

    strcpy(ifr.ifr_name, wifiInfo.iw_interface.c_str());
    int returnCode = 0;
    returnCode = ioctl(fd, SIOCGIFADDR, &ifr);
    close(fd);
    if(returnCode != 0)
    {
        std::stringstream errorCode;
        errorCode << returnCode;
        std::string msg = "Cannot get ip address. Please check config file or connection. Return code ioctl is " + errorCode.str();
        throw CannotGetIpException(msg);
    }
    wifiInfo.ip = inet_ntoa(((struct sockaddr_in*)&ifr.ifr_addr)->sin_addr);
}

} } // wifi::helpers
