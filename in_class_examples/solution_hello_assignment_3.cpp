// hello7_manipulators.cpp

#include <iostream> 
#include <iomanip> 

int main() { 
 

    std::cout << std::left << std::setw(12) << ""             
    << std::right << std::setw(3) << '1'
    << std::right << std::setw(3) << '2'
    << std::right << std::setw(3) << '3'
    << std::right << std::setw(3) << '4'
    << std::right << std::setw(3) << 'T'
    << '\n';   
    
    std::cout << std::left << std::setw(12) << "Univ. Mich"     
    << std::right << std::setw(3) << "7"
    << std::right << std::setw(3) << "7"
    << std::right << std::setw(3) << "14"
    << std::right << std::setw(3) << "14"
    << std::right << std::setw(3) << "42"
    << std::endl;

    std::cout << std::left << std::setw(12) << "Ohio State"    
    << std::right << std::setw(3) << "3"
    << std::right << std::setw(3) << "10"
    << std::right << std::setw(3) << "0"
    << std::right << std::setw(3) << "14"
    << std::right << std::setw(3) << "27"
    << std::endl;
}
