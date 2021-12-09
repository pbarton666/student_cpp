// hello5_manipulators.cpp

#include <iostream>    // all these are in the standard library 
#include <iomanip>     // where manipulators live
#include <cmath>       // where a lot of math functions live

int main()
{
     const long double pi = std::acos(-1.L);    //  long int

     std::cout << "default precision (6): " << pi << '\n';  
     std::cout << "std::setprecision(10): " << std::setprecision(10) << pi << '\n';   

return 0;
}
