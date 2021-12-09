// scope.cpp

#include <iostream>

using namespace std;

// globals are outside of any function or class
// declared at top

int fav_global = 4;

void report(){
    cout << "global is: " << fav_global << endl;
}

void encapsulated(int fav_global){
    cout << "encapsulated() here" << endl;
    fav_global = 123;
}

int main(){
    report();
    fav_global = 666;
    report();

    encapsulated(fav_global);
    report();
}