#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string dog = "quinn";

    // string* creates a pointer variable  (pointers hold addresses, and they know var length)
    // ptr is the name
    // &dog is the address of the variable dog
    string* ptr = &dog;

    // You might also see these (but above is preferred):
    // string *ptr;
    // string * ptr;

    // when '*' is not used in a declaration, it 'dereferences' (grabs value)

    cout << "The value tied to ptr is: " << *ptr << endl ;
    cout << "The address of dog is: " << &dog << endl;
    cout << "The value of dog is: "  << dog<< endl;

    cout << "\n****\n";
    //  We can change the value in the memory address associated with the name 'dog' w/ another string:

    *ptr = "alt dog name";

    cout << "The value tied to ptr is: " << *ptr << endl;
    cout << "The address of dog is: " << &dog << endl;
    cout << "The value of dog is: "  << dog << endl;

    cout << endl;
}