#include <iostream>
#include <string>

using namespace std;

//  Add a class method pubMethod
//  Add an external function

void myFunc(){
    cout << "myFunc reporting for duty!" << endl;
}

class MyClass {                
    public:                 
        int aNum;           
        string aString;

        // ADD this
        void pubMethod() {
            cout << "Hi from pubMethod().  " << aString << endl;
            myFunc();
        }
};   

int main(){

    // Create instances of MyClass and put them through paces.
    MyClass anObj;     // create a class instance (really an 'object')
    anObj.aString = "I an anObj!";
    anObj.pubMethod();

    MyClass anotherObj;  // create another class instance
    anotherObj.aString = "I an anotherObj!";
    anotherObj.pubMethod();

    return 0;
}