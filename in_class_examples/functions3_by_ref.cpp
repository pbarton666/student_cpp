// functions3_by_ref.cpp
#include <iostream>
#include <string>

using namespace std;

// It's possible to pass args by value or by reference

int oneArgByVal(int arg){
    return ++arg;
}

int oneArgByRef(int &arg){
    return ++arg;
}

int main(){
 
    int arg1 =10;
    int arg2 =10;
    int result;

    cout << endl;
    result = oneArgByRef(arg1);
    cout << "By reference.  " << endl;
    cout << "Arg is:  " << arg1 << endl;
    cout << "Result is: " << result << endl;
    cout << endl;

    result = oneArgByVal(arg2);
    cout << "By value.  " << endl;
    cout << "Arg is:  " <<  arg2 << endl;
    cout << "Result is: " <<  result << endl;



}