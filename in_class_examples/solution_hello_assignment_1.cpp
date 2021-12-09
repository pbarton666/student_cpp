//   solution_hello_assignment_1.cpp

#include <iostream>    // part of the standard library 

int main()
{
    std::string resp;
    
    std::cout << "What's your favorite team  ?" << std::endl;
    std::cin >> resp;
    std::cout << "This year is 'next year'.  GO " + resp + " !\n";
    
    return 0;
}