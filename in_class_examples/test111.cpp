#include <iostream>
#include <string>
#include <complex> 
#include <cmath>
#include <cassert>

//#define epsilon=1e-6;

using namespace std;
using namespace std::complex_literals;


typedef struct _complex {
    float real;
    float imag;
} complexNumber;

 complexNumber createComplex(float r, float i) {
     complexNumber c;
     c.real = r;
     c.imag = i;
     return c;
 };

  //  We'll be testing our new structure, so will need to handle floats
bool approximatelyEqual(float a, float b, float epsilon=1e-6)
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

void testCreateComplex(){
    using namespace complex_literals;
    typedef complex<float> dcomp;
    complexNumber actual = createComplex(1., 3.);

    dcomp target(1., 3.);

    // BOOST ->  JUnit   assertEqual  assertAlmostEqual

    assert (almostEqual(actual.real , target.real()));
    assert (almostEqual(actual.imag, target.imag()));
}

complexNumber addComplex(complexNumber num1, complexNumber num2){
    complexNumber result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

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
    cout << "Yay tests ran!";
}