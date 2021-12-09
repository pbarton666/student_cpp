#include <iostream>
#include <string>

// function overloading (two signatures)
int multiply ( int x, int y )
{
    std::cout << "Integer flavor" << std::endl;
    return (x * y);
}

double multiply ( double x, double y )
{
    std::cout << "Double flavor" << std::endl;
    return (x * y);
}

int main(){
    std::cout << "********"  << std::endl;
    int x = 10;
    int y = 20;
    int result_int;
    result_int = multiply(x, y);
    std::cout << "Integer multiply: " + std::to_string(result_int) << std::endl;


    std::cout << "********"  << std::endl;
    double a = 10.0;
    double b = 20.0;
    double result_double;
    result_double = multiply(a, b);
    std::cout << "Double multiply: " + std::to_string(result_double) << std::endl;
}