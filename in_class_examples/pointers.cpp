#include <iostream>
#include <string>

using namespace std;

void pointer(){
    // show off some pointer tricks

    int i = 666;           // var declaration
    int *i_pointer;        // pointer declaration (can hold the address of an integer)

    i_pointer = &i;      //  assign the address (&) of i to the pointer

    // so what can we do?   Here's what we know:
    cout << "Hi, my name is 'i'.  My value is " + to_string(i) << endl;
    cout << "I live at:  " << hex << i_pointer << endl;

    // let's say I don't know the value of i, just the pointer ...
    cout << "Value of i from pointer is: " + to_string(*i_pointer) <<endl;

    // we can change the value of i by resetting the contents of its address.  Here, we
    // assign the value of the de-referenced j_pointer to the de-referenced i_pointer.
    int j = 123;
    int *j_pointer;
    j_pointer = &j;

    *i_pointer = *j_pointer;
    cout << "Value of i is: " + to_string(i) <<endl;
    cout << "Value of j is: " + to_string(j) <<endl;
 
     // we can make a new variable based on the value at the address of an existing one
    int n;
    n = *j_pointer;
    cout << "Value of n is: " + to_string(n) <<endl;
}

int main(){
   pointer();
}

