#ifndef _IPV4Address_
#define _IPV4Address_
#include <iostream>

class IPv4Address {
private:
    unsigned char segments[4];

public:
    IPv4Address();
    IPv4Address(unsigned int raw);
    
    friend std::istream& operator>>(std::istream& is, IPv4Address& ipAddress);
    friend std::ostream& operator<<(std::ostream& os, IPv4Address& ipAddress);

    unsigned int AsNumber();

    std::array<unsigned char, 4> GetSegments();


};

#endif