#include "PrintLargestPrime.h"
#include <iostream>
#include <vector>
#include <algorithm>

int PrintLargestPrime()
{
    int InputNum{};
    std::vector<int> Max_Value;
    int i{};

    std::cout << "Type in a number that should be checked for the largest prime number" << std::endl;
    std::cout << "the number should be under 10000" << std::endl;
    std::cin >> InputNum;

    if(InputNum > 10000){

        std::cout << "Invalid Input";
    	return 1;
    }

    for (i=2; i<InputNum; i++) 
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
                break;
            else if (j+1 > sqrt(i)) {
                std::cout << i << " ";
                Max_Value.push_back(i);
                
                //std::cout << "the largest one is:";
            }
        }   
    
    std::cout << "\n this is the max number: " << *std::max_element(Max_Value.begin(), Max_Value.end()) << std::endl;
    
    return 0 ;
}
