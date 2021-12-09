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

// 1.  Create variable type
typedef struct _complexNumber {
    float real;
    float imag;
} complexNumber;

// 2. Create an instance of this variable type
complexNumber createComplex(float r, float i){
    // returns a populated structure
    complexNumber c;
    c.real = r;
    c.imag = i;
    return c;
}

// 3.  Create methods to work with the variable type.  This adds
complexNumber addComplex(complexNumber num1, complexNumber num2) {
    // adds complex numbers
    complexNumber result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return (result);
}

// 4.  Do we need a way to report?
string reportComplex(complexNumber c){
    // politely reports a complex number
    string output;
    char imag_sign = (c.imag > 0) ? '+' : '-';
    output = "(" + to_string(c.real) + " " + imag_sign  + " " + to_string(c.imag)  +"i)";
    return output;
}

// 5.  This method multiplies (save for exercise)
complexNumber multComplex(complexNumber num1, complexNumber num2){
    // multiply two complex numbers (using FOIL method)
    complexNumber result;
    float F = num1.real * num2.real;
    float O = num1.real * num2.imag;
    float I = num1.imag * num2.real;
    float L = num1.imag * num2.imag * -1;
    result.real = F + L;
    result.imag = O + I;
    return result;
}

// 6. We'll be testing our new structure, so will need to handle floats
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

// 7.  We want to test our new structure; here we can rely on the built-in version
void testCreateComplex(){
    using namespace complex_literals; // for i
    typedef complex<double> dcomp;

    complexNumber actual = createComplex(1., 3.); 
    dcomp target(1., 3.);
    //cout << "actual:  " <<  to_string(actual.real) <<"  real: " << to_string(target.real());
    assert (almostEqual(actual.real, target.real()));
    assert (almostEqual(actual.imag, target.imag()));
    //assert (1==1);
}

// 8.  Here, we test addition
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

// Here we test multiplication
void testMultComplex(){
    typedef complex<double> dcomp;

    complexNumber actual1 = createComplex(1., 3.);
    complexNumber actual2 = createComplex(3., 6.);
    complexNumber actual_mult = multComplex(actual1, actual2);

    dcomp target1(1., 3.);
    dcomp target2(3., 6.);
    complex<double> target_mult = target1 * target2;
    assert (almostEqual(actual_mult.real, target_mult.real()));
    assert (almostEqual(actual_mult.imag, target_mult.imag()));
}

int main(){

    testCreateComplex();

    complexNumber c = createComplex(1.0, 3.0);
    complexNumber d = createComplex(3., 4.);
    complexNumber e = createComplex(2., 3.);
    
    string result = reportComplex(multComplex(d, e));

    cout  << reportComplex(d) +  " * " + reportComplex(e) + " = "  + result;
}

