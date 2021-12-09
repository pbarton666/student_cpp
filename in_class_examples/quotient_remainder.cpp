#include <iostream>

int main()
{    
    int divisor, dividend, quotient, remainder;

    std::cout << "Enter dividend: ";
    std::cin >> dividend;
    std::cout << dividend << std::endl;

    std::cout << "Enter divisor: ";
    std::cin >> divisor;
    std::cout << divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    std::cout << "Quotient = " << quotient << std::endl;
    std::cout << "Remainder = " << remainder;

    return 0;
}