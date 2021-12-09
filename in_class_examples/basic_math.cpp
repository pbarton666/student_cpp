//C++ arithmetic operators
// + (add)
// - (subtract)
// / (divide)
// * (multiply)
// % (modulus division) 4 % 5 = 4 the remainder is returned 6 % 5 = 1
// += (add and assign)
// -= (subtract and assign)
// /= (divide and assign)
// *= (multiply and assign)
// %= (mod and assign)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float myFloat = 0.0f; //the f (requires decimal) tells the compiler to treat this real number as a 32 bit float
                          //and not as a 64 bit double. this is more of a force of habit than a requirement
    cout << "Enter a number. ENTER: ";
    cin >> myFloat;
    cout << "The square root of " << myFloat << " is " << sqrt(myFloat) << endl;
    cin.clear();
    cin.sync();
    cin.get();

    return 0;
}

/*
sqrt(myFloat)
pow(myFloat, .5)
sin, cos, tan, etc.  all work in radians.

*/