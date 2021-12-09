// C++ program to illustrate the
// function numeric_limits<T>::max
#include <iostream>
#include <limits>
using namespace std;

int main(){

    // Query for the size of a specific type
    float my_float;
    cout << "A float is " << sizeof(float) << " bytes.\n";

    // How many digits w/o loss of precision?
    cout << "A float can contain " << numeric_limits<float>::digits << " digits. \n";

    // What's the largest?
    cout << "Max value: " << numeric_limits<float>::max() << ". \n";

    // What's the smallest?
    cout << "Min value: " << numeric_limits<float>::min() << ". \n";
}

