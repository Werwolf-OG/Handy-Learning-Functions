cmake_minimum_required(VERSION 3.12.0)
project(Section15 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Themoderncppchallenge main.cpp PrintLargestPrime.h PrintLargestPrime.cpp SumOfNaturalsDivisibleby.h SumOfNaturalsDivisibleby.cpp
               ValidatesISBNs-10digit.h ValidatesISBNs-10digit.cpp IPV4Address.h IPV4Address.cpp IPv4Address_HelperFunctions.h IPv4Address_HelperFunctions.cpp)  

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set_property(TARGET Themoderncppchallenge PROPERTY CXX_STANDARD 20)
include(CPack)