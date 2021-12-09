// hello3_dialog.cpp

#include <iostream>    // part of the standard library 
#include <string>      // also part of the standard library

int main()
{
    std::string resp;
    
    std::cout << "Hello World from hello3!  How are you?" << std::endl;

    // two ways to get input;  note extraction and insertion operators
    std::cin >> resp;
   // std::getline(std::cin >> std::ws, resp);  //requires <string>

    std::cout << "I'm deligheted that you're " + resp + "!";
    return 0;
}