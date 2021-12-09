// hello1.cpp    Classic hello.

#include <iostream>   // all you need for I/O

int main()   // Entry point - executes after static objects initialized; returns an int
{
    std::cout << "Hello World!";   // Sends string to the cout (which lives in std)
    return 0;                      // Returns 0 to let the OS know it's done (redundant)
}