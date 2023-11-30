#include "SumOfNaturalsDivisibleby.h"
#include <iostream>


double UserDivisible()
{
    int UserNum{};
    std::cout << "Enter a number" << std::endl;
    std::cin >> UserNum;

        int total{};
    for (int number = 1; number < UserNum; ++number) {
        if (number % 3 == 0 || number % 5 == 0) {
            total += number;
            
            std::cout << total << std::endl;
        }
    }

    
    return 0;
}
