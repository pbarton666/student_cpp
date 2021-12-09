#include <iostream>
#include <string>

using namespace std;

//  Declare ThinClass; with  thinMethod
//    Then specify Thin Class
//    Then execute thinMethod

class MyClass {                
    public:                 
        int aNum;           
        string aString;

        // This method is visible / accessible to all
        void pubMethod() {
            cout << "Hi from pubMethod().  " << aString << endl;
        }
};   
//================================= ADD THIS
class ThinClass{
    public:
        void thinMethod();   // merely declared here; defined elsewhere.
};

// Externally-defined class method
void ThinClass::thinMethod(){
    cout << "ThinClass::thinMethod reporting for duty.  " << endl;
};

int main(){

    // Create instances of MyClass and put them through paces.
    MyClass anObj;     // create a class instance (really an 'object')
    anObj.aString = "I an anObj!";
    anObj.pubMethod();

    MyClass anotherObj;  // create another class instance
    anotherObj.aString = "I an anotherObj!";
    anotherObj.pubMethod();


//=============================== ADD THIS
    ThinClass skinny;  // create a class instance
    skinny.thinMethod();


    return 0;
}