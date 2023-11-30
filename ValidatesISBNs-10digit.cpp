#include "ValidatesISBNs-10digit.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>


bool checkforValidISBN(std::string& ISBN)
{
    int string_Length = ISBN.length();

    if(string_Length != 10){
        return false;
    }

    auto valid = false;

     int sum = 0; 
    for (int i = 0; i < 9; i++)  
    { 
        int digit = ISBN[i] - '0'; 
        if (0 > digit || 9 < digit) 
            return false; 
        sum += (digit * (10 - i)); 
    } 
  
    
    char last = ISBN[9]; 
    if (last != 'X' && (last < '0' ||  
                        last > '9')) 
        return false; 
  
  
    sum += ((last == 'X') ? 10 :  
                  (last - '0')); 

    return (sum % 11 == 0); 

    return valid;
}


int ValidateISBN()
{
    std::string ISBN;
    std::cout << "Type in your 10 digit ISBN, end it with X :" << std::endl;
    std::cin >> ISBN;

    char Tryit {};

    if(checkforValidISBN(ISBN)){
        std::cout << "Is Valid";
    }
    else
        std::cout << "Is not valid, try again? y/n :" << std::endl;
        std::cin >> Tryit;

        switch (Tryit)
        {
            case 'y':
                ValidateISBN();
                break;

            case 'n':
                return 0;

            default:
                std::cout << "Wrong input" << std::endl;   
        }

    return 0;
}
