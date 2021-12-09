// hello7_manipulators.cpp

#include <iostream> 
#include <iomanip> 

int main() {   
    std::cout << std::left << std::setw(12) << "Univ. Mich"             
    << std::right << std::setw(3) << 42             
    << '\n';   
    
    std::cout << std::left << std::setw(12) << "Ohio State"             
    << std::right << std::setw(3) 
    << 27             
    << '\n'; 
}
