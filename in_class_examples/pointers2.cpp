// pointers2.cpp

// demonstrate the use of pointers with wine

#include <iostream>
#include <string>

using namespace std;

int main(){
    // show off some pointer tricks

    int integer;
    int *pointer_to_integer;
    int **pointer_to_pointer_to_integer;
    
    int* pointer_to_integer_a; 

    string red[3];   red[0]="merlot";   red[1]="sherry"; red[2]="port"; //red[3]="rose";
    string white[3];  white[0]="ries";  white[1]="chardy"; white[2] = "pinotg"; //white[3]="sauvb";
     
    string* reference_to_red = red;

    cout <<" The first address:" << reference_to_red << endl; 
    cout << " The contents:  " << *reference_to_red << endl; 
    cout << endl;

    //nudge the reference along
    ++reference_to_red;

    cout <<" The next address:" << reference_to_red << endl;
    cout << " The next contents:  " << *reference_to_red << endl;
    cout << endl;

    // a pointer acts like an index (which we can also use)

    cout << " Via pointer:  contents of the first bin is " << red[0] << endl;
    cout << endl;

    // let's say the 'bargain bin' is the first bin
    --reference_to_red;

    string bargain = "vino fino";
    string* reference_to_bargain = &bargain;
    *reference_to_red = *reference_to_bargain;

    cout <<" The bargain address:" << reference_to_red << endl;
    cout << " The contents:  " << *reference_to_red << endl;
    cout << endl;

    cout << " Via pointer:  contents of the first bin is " << red[0] << endl;
    cout << endl;

    cout << endl;
    cout << "sizeof(red) " << sizeof(red) << endl;

    for(int i=0; i<sizeof(red)/sizeof(red[0]); i++)
        cout << red[i] << endl;

    // parallel index and ponter operations
    cout << "The last red bottle as red[2]  " << red[2] << endl;
    cout << "The last red bottle via pointer " << *(red +2) << endl;
    return 0;


}


    /*



    int i = 666;           // var declaration
    int *i_pointer;        // pointer declaration (can hold the address of an integer)

    i_pointer = &i;      //  assign the address (&) of i to the pointer

    // so what can we do?   Here's what we know:
    std::cout << "Hi, my name is 'i'.  My value is " + std::to_string(i) << std::endl;
    std::cout << "I live at:  " << std::hex << i_pointer << std::endl;

    // let's say I don't know the value of i, just the pointer ...
    std::cout << "Value of i from pointer is: " + std::to_string(*i_pointer) <<std::endl;

    // we can change the value of i by resetting the contents of its address.  Here, we
    // assign the value of the de-referenced j_pointer to the de-referenced i_pointer.
    int j = 123;
    int *j_pointer;
    j_pointer = &j;

    *i_pointer = *j_pointer;
    std::cout << "Value of i is: " + std::to_string(i) <<std::endl;
    std::cout << "Value of j is: " + std::to_string(j) <<std::endl;
 
     // we can make a new variable based on the value at the address of an existing one
    int n;
    n = *j_pointer;
    std::cout << "Value of n is: " + std::to_string(n) <<std::endl;
}

int main(){
   pointer();
}

*/