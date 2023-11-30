#include <iostream>
#include "SumOfNaturalsDivisibleby.h"
#include "PrintLargestPrime.h"
#include "ValidatesISBNs-10digit.h"
#include "IPv4Address.h"

 void ReadWriteIPv4Address();

int main() {

    char Funct_choice;
    std::cout << "make a choice between these functions" << std::endl;
    std::cout << "- (a)" << std::endl;
    std::cout << "- (b)" << std::endl;
    std::cout << "- (c)" << std::endl;
    std::cout << "- (d)" << std::endl;
    std::cin >> Funct_choice;

    switch (Funct_choice)
    {
        case 'a':
            UserDivisible();
            break;

        case 'b':
            PrintLargestPrime();
            break;

        case 'c':
            ValidateISBN();
            break;

        case 'd':
            ReadWriteIPv4Address();
            break;

    }
 
    return 0;
}

void ReadWriteIPv4Address()
{
    IPv4Address IP;
    
    std::cout << "Type in your IPv4 address" << std::endl;
    std::cin >> IP;

    std::cout << IP << std::endl;
}