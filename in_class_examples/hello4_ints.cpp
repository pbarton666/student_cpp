// hello4_ints.cpp

#include <iostream>    // part of the standard library 
#include <string>      // also part of the standard library

int main()
{
    std::string resp;
    int age;
    int days;
    
    std::cout << "How are you  ?" << std::endl;

    std::getline(std::cin >> std::ws, resp);  //requires <string>
    std::cout << "I'm deligheted that you're " + resp + "!\n";

    std::cout << "How old are you?  ";
    std::cin >> age;

    std::cout << "So you're " << age << "  That's "  << age * 365.25 << " days.\n";

    days = age * 365.25;
    std::cout << "Days is specified as an integer, remembered as:  " << days;
    return 0;
}