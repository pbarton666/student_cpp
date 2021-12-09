// hello5_manipulators.cpp

#include <iostream>    // all these are in the standard library 
#include <iomanip>     // where manipulators live

int main()
{
     const long a_num = 132323.0;
     std::cout << std::showpos << a_num << std::endl;
     std::cout << std::hex << a_num  << std::endl;
     std::cout << std::oct << a_num  << std::endl;

     std::cout << std::endl;
     std::cout << true << std::endl;
     std::cout << std::boolalpha << true << std::endl;

    return 0;
}
