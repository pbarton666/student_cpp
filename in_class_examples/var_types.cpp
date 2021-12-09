#include <iostream>

int main(){
    // Integers

    // infer data type
    auto xx = 4;   //i(nt)
    auto yy = 1.23; //d(ouble)
    auto ptr = &xx; //P(outer to)i(nteger)

    decltype(xx+yy) zz;  // works with any function return
    std::cout << "zz is: " << zz << " type: " << typeid(zz).name() << std::endl;
    

    // short is normally defined as a 16-bit integer.
    signed short int varName1;  // stores from -32768 to +32767
    signed short varName2;  // same as signed short int
    unsigned short int varName3;  // stores from 0 to 65535
    unsigned short varName4;  // same as unsigned short int
    short int varName5;  // same as signed short int
    short varName6;  // same as short int

    // long is normally defined as a 32-bit integer.
    signed long int varName7;  // stores from -2147483648 to +2147483647
    signed long varName8;  // same as signed long int
    unsigned long int varName9;  // stores from 0 to 4294967295
    unsigned long varName10;  // same as unsigned long int
    long int varName11;  // same as signed long int
    long varName12;  // same as long int

    // int can be either a 16-bit or a 32-bit integer, depending on the compiler.
    signed int varName13;  // either signed short or signed long
    unsigned int varName14;  // either unsigned short or unsigned long
    int varName15;  // same as signed int

    // Char max value 255 (if signed -128->127); ASCII only

    char charLetter = 'A';
    char charNumber = 65;

    // Float
    float myFloat;  // 4 bytes
    double myDouble;  // 8 bytes
    long double myLongDouble;  // 8, 12, or 16

    int x{4};
    float f{5.0};  // '.0' and no suffix = float
    double d{6.0f}; // '.0' and 'f' suffix = double 

    // floats have 6  digits of precision on output

    // To increse, set a manipulator / std::setprecision(15) from <iomanip> header
    //#include <iomanip>    
	std::cout << 5.0 << '\n';            //prints as '5' because no zeros
	std::cout << 6.7f << '\n';           //normal
	std::cout << 9876543.21 << '\n';    //sci notation

    std::cout << 9.87654321f << '\n';   // all print to 6 precision
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    // Precision and data types

    /* 4 bytes	±1.18 x 10-38 to ±3.4 x 1038	6-9 significant digits, typically 7
    8 bytes 	±2.23 x 10-308 to ±1.80 x 10308	15-18 significant digits, typically 16
    16 bytes	±3.36 x 10-4932 to ±1.18 x 104932	33-36 significant digits */

    // NANs are floats, as is INF.   If compiler supports IEEE 754 floats. There are several flavors.
        double zero {0.0};
        double posinf { 5.0 / zero }; // positive infinity    1.#INF
        std::cout << posinf << '\n';

        double neginf { -5.0 / zero }; // negative infinity   -1.#INF
        std::cout << neginf << '\n';

        double nan { zero / zero }; // not a number (mathematically invalid)    IND
        std::cout << nan << '\n';
    
   // Boolean 
    std::cout << true << '\n';    // prints 1
    std::cout << false << '\n';  // prints 0

        // NB this is necessary for cin (only takes 1 or 0, fails silently otherwise.  unless... this)

    std::cout << std::boolalpha; // print bools as true or false
    std::cout << true << '\n';  // prints true
    std::cout << false << '\n'; // prints false

        // Bool values implicitly typecaset 0->false  else->true

    std::cout << std::boolalpha; // print bools as true or false
	bool b1 = 4 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b1 << '\n';
	bool b2 = 0 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b2 << '\n';    bool b{}; // default initialize to false

    return 0;

}