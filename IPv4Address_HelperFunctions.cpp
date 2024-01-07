#include "IPv4Address_HelperFunctions.h"
#include "Ipv4Address.h"
#include <vector>
#include <array>


void ReadWriteIPv4Address()
{
    
IPv4Address IPA;
IPv4Address IPB;

 char UserChoice{};

    std::cout << "Type in your IPv4 address" << std::endl;
    std::cin >> IPA;

    std::cout << IPA << std::endl;

    std::cout << "Do you want to type in a second address and calculate the range?" << std::endl;
    std::cout << "y/n?" << std::endl;
    std::cin >> UserChoice;

    if(UserChoice == 'y')
    {
        std::cout << "Type in your second address: ";
        std::cin >> IPB;
        IPRange(IPA, IPB);
    }
}



void IPRange(IPv4Address &IPA, IPv4Address &IPB)
{
    std::array<unsigned char, 4> LowerNumber;

    if(IPA.AsNumber()<IPB.AsNumber())
    {
        LowerNumber = IPA.GetSegments();
    }
    else
    {
        LowerNumber = IPB.GetSegments();
    }

    //TODO: Implement
}