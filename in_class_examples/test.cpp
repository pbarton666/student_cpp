#include <iostream>
#include <string>
#include <complex>  // just for testing
#include <cmath>
#include <cassert>

// normally EPSILON would be globally defined
//#define EPSILON (3)

// IN REAL LIFE ... how to roll our own:

using namespace std;

// Sturuture to contain elements of a complex number (use _ as a data type, normal as constructor)

// Create variable type
typedef struct _complexNumber {
    float real;
    float imag;
} complexNumber;

// Create an instance of this variable type
complexNumber createComplex(float r, float i){
    // returns a populated structure
    complexNumber c;
    c.real = r;
    c.imag = i;
    return c;
}

// Create methods to work with the variable type.  This adds
complexNumber addComplex(complexNumber num1, complexNumber num2) {
    // adds complex numbers
    complexNumber result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return (result);
}

//  Do we need a way to report?
string reportComplex(complexNumber c){
    // politely reports a complex number
    string output;
    char imag_sign = (c.imag > 0) ? '+' : '-';
    output = "(" + to_string(c.real) + " " + imag_sign  + " " + to_string(c.imag)  +"i)";
    return output;
}



 //  We'll be testing our new structure, so will need to handle floats
bool approximatelyEqual(float a, float b, float epsilon)
{
    // https://books.google.ca/books?id=T89QAAAAMAAJ
        return fabs(a - b) <= (   (fabs(a) < fabs(b) ? fabs(b) : fabs(a))    * epsilon);
}

bool almostEqual(float a, float b){
    const float EPSILON = 1e-6;
    if (fabs(a - b) < EPSILON)
        return true;
    else
        return false;
}

//We want to test our new structure; here we can rely on the built-in version
void testCreateComplex(){
    using namespace complex_literals; // for i
    typedef complex<double> dcomp;

    complexNumber actual = createComplex(1., 3.); 
    dcomp target(1., 3.);
    //cout << "actual:  " <<  to_string(actual.real) <<"  real: " << to_string(target.real());
    assert (almostEqual(actual.real, target.real()));
    assert (almostEqual(actual.imag, target.imag()));
}

// Here, we test addition
void testAddComplex(){
    typedef complex<double> dcomp;
    complexNumber actual1 = createComplex(1., 3.);
    complexNumber actual2 = createComplex(3., 6.);
    complexNumber actual_add = addComplex(actual1, actual2);

    dcomp target1(1., 3.);
    dcomp target2(3., 6.);
    complex<double> target_add = target1 + target2;
    assert (almostEqual(actual_add.real, target_add.real()));
    assert (almostEqual(actual_add.imag, target_add.imag()));
}

int main(){

    testCreateComplex();
    testAddComplex();
    complexNumber c = createComplex(1.0, 3.0);
    complexNumber d = createComplex(3., 4.);
    complexNumber e = createComplex(2., 3.);
    
    //string result = reportComplex(multComplex(d, e));

    //cout  << reportComplex(d) +  " * " + reportComplex(e) + " = "  + result;
}
