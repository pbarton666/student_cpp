// string_examples.cpp

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    int myint = -3;
    float myfloat = 2.3;
    double mydouble = 2.3453;

    // int -> short
    short newshort;
    newshort = myint;
    cout << typeid(newshort).name() << " " << newshort << endl;

    // float -> int
    int newint;
    newint = myfloat;
    cout << typeid(newint).name()  << " " << newint << endl;

    // int -> float
    float newfloat;
    newfloat = myint;
    cout << typeid(newfloat).name()  << " " << newfloat << endl;

    // explicit
    // float -> int
    int exint;
    exint = int(mydouble);   // functional notation
    // or (int) mydouble - this is C-like
    cout << typeid(exint).name()  << " " << exint<< endl;

    // string to integer using built-in
    cout << stoi("123") << endl;
  
	return 0;
}
