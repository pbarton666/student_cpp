#include <iostream>
#include <string>

int main() 
{
    std::cout << "Hello, World!" << std::endl;
    for (int i=0; i<3; i++){
        std::cout << "i is now " << i ;
        std::cin.get();
    }
    return 0;
}