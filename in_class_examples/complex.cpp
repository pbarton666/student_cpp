#include <iostream>
#include <iomanip>
#include <complex>
#include <cmath>

using namespace std;

/* Demonstrate new data type as exemplar of roll your own data structures */

// Show these as all in main()
// ... then move to functions as shown here

void myTypedef(){
    typedef complex<double> dcomp;
    dcomp c(1.0, 3.0);
}

void myComplex(){
    using namespace std::complex_literals;
    typedef complex<double> dcomp;

    dcomp comp1a(2.3, 3.1);
    dcomp comp2a = 2.0 + 4.1i;
    dcomp comp3a = 3. + .3i;
    dcomp comp4a = 4. + .4i;

    dcomp comp1(3., 4.);
    dcomp comp2(2., 3.);

    cout<< "Complex number: " << comp1 << endl;
    cout<< "Real: " << comp1.real() << endl;
    cout<< "Imaginary: " << comp1.imag() << endl;

    cout << "\n*****\n";
    cout << "Adding " << comp2 << " and " << comp1 << ":    " << comp2 + comp1 << endl;
    cout << "Subtracting " << comp2 << " and " << comp1 << ":    " << comp2 - comp1 << endl;
    cout << "Multiplying " << comp2 << " and " << comp1 << ":   " << comp2 * comp1 << endl;
    cout << "Dividing " << comp2 << " and " << comp1 << ":   " << comp2 / comp1 << endl;

    // lots more like polar, pow, sqrt, sin, etc.
}
int main(){

    myTypedef();
    myComplex();
    return 0;
}