#include <iostream>
using namespace std;

int isPrime(int num1, int index=2)
{
    if (num1 < 2)
    {
        return 0;
    }
    if (num1 == 2 || num1 == 3)
    {
        return 1;
    }
    if (num1 % index == 0)
    {
        return 0;
    }
    if (index <= num1 / 2)
    {
        return 1;
    }

    // increment index (like an inner for loop)
    int result = isPrime(num1, index + 1);
    
    return (result);
}

int main()
{
    int num = 7;
    if (isPrime(num))
    {
        cout << num << " is a Prime number !";
    }
    else
    {
        cout << num << " is non Prime!";
    }
    return 0;
}