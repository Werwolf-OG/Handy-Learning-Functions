#include "Ipv4Address.h"
#include <array>

IPv4Address::IPv4Address()
{
    segments[0] = 0;
    segments[1] = 0;
    segments[2] = 0;
    segments[3] = 0;
}
IPv4Address::IPv4Address(unsigned int raw)
{
    segments[0] = raw >> 0 & 0xFF;
    segments[1] = raw >> 8 & 0xFF;
    segments[2] = raw >> 16 & 0xFF;
    segments[3] = raw >> 24 & 0xFF;
}

std::istream &operator>>(std::istream &is, IPv4Address &ipAddress)
{
    int a, b, c, d;
    char dot, dot2, dot3;

 is >> a >> dot >> b >> dot2 >> c >> dot3 >> d;

    ipAddress.segments[0] = a;
    ipAddress.segments[1] = b;
    ipAddress.segments[2] = c;
    ipAddress.segments[3] = d;
    
    return is;
}

std::ostream &operator<<(std::ostream &os, IPv4Address &ipAddress)
{
    os << static_cast<int>(ipAddress.segments[0]) << "." 
       << static_cast<int>(ipAddress.segments[1]) << "." 
       << static_cast<int>(ipAddress.segments[2]) << "." 
       << static_cast<int>(ipAddress.segments[3]) << std::endl;

    return os;
}

unsigned int IPv4Address::AsNumber()
{
    return *(reinterpret_cast<unsigned int*>(segments));
}

std::array<unsigned char, 4> IPv4Address::GetSegments()
{
    return std::to_array(segments);
}
