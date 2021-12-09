//  solution_hello_assignment_2.cpp

#include <iostream>    // part of the standard library 
#include <string>      // also part of the standard library

int main()
{
    int fish_length;
    std::string resp;
    
    std::cout << "How long is your best fish?" << std::endl;

    //std::getline(std::cin >> std::ws, resp);  //requires <string>
    std::cin >> fish_length;
    std::cout << "Dang! " << fish_length * .75 << " inches!\n";

    fish_length = fish_length * .75;
    std::cout << "The fish was probably " << fish_length << " inches.";
    return 0;
    
}