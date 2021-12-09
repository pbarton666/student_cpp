#include <cmath>
#include <iostream>
#include <string>


#include <bits10_1.h>
#include <typeinfo>

// #include <numbers>    // <numbers> available in C++20 or later; gives pi and e
#include <iomanip>
//#include <boost/math/constants/constants.hpp>  //Cannot open include filearray

using std::cin;
using std::cout;
using std::endl;

/*
Function 	    Description
abs(x) 	        absolute value of x
acos(x) 	    arccosine of x
asin(x) 	    arcsine of x
atan(x) 	    arctangent of x
cbrt(x) 	    cube root of x
ceil(x) 	    value of x rounded up to its nearest integer
cos(x) 	        cosine of x
cosh(x)     	hyperbolic cosine of x
exp(x) 	        value of e^x
expm1(x) 	    value of (e^x) - 1
fabs(x) 	    absolute value of a floating x
fdim(x, y)  	positive difference between x and y
floor(x) 	    value of x rounded down to its nearest integer
hypot(x, y) 	Returns sqrt(x^2 +y^2) without intermediate overflow or underflow
fma(x, y, z) 	Returns x*y+z without losing precision
fmax(x, y) 	    highest value of a floating x and y
fmin(x, y)  	lowest value of a floating x and y
fmod(x, y)  	floating point remainder of x/y
pow(x, y)   	value of x to the power of y
sin(x) 	        sine of x (x is in radians)
sinh(x) 	    hyperbolic sine of a double value
tan(x) 	        tangent of an angle
tanh(x) 	    hyperbolic tangent of a double value
*/

int main(){

    // Notes
    //      You get 'first name basis' access to these:
    //      Trig functions in radians

    // What sort of variables do these produce?
    auto my_sin = sin(2);  //  #include <bits10_1.h> for auto
    cout << "The sin of " << 2 << " is " << my_sin << endl;
    cout << "It's a genuine " << typeid(my_sin).name() << endl; //#include <typeinfo>

    double pi = atan(1) * 4;
    cout << "Pi is around: " << pi << endl;

    double e = exp(1); 
    cout << "e is approximately: " << e << endl;

    // pi is available in C++ >= 20
    // std::cout << std::fixed << std::setprecision(20);
    // std::cout << "float       " << std::numbers::pi_v<float> << std::endl;
    // std::cout << "double      " << std::numbers::pi << std::endl;
    // std::cout << "long double " << std::numbers::pi_v<long double> << std::endl;
    // std::cout << "exact       " << "3.141592653589793238462643383279502884197169399375105820974944" << std::endl;



}