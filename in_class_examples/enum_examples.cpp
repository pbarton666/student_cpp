#include <iostream>
using namespace std;

int main(){
    // fixed range of values; defaults 0, 1, 2
    enum cars {ford, chevy};
    cout << "ford is: " << ford << endl;
    cout << "chevy is: " << chevy << endl;


    // any enum is functionally a variable type 
    cars my_car = ford;
    cout << "my car is : " << ford << endl;

    // we can assign values
    enum fridge{eggs=12, milk=1, juice=3, soda=0};
    cout << "I have this many eggs: " <<  eggs << endl;

    // we can use logic
    int beverage = juice | soda;  // bitwise or
    cout << "I have this many beverages: " << beverage << endl;
    
    // breaks because these are read-only    eggs = 34;



    return 0;
}