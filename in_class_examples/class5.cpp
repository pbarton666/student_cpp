#include <iostream>
#include <string>

using namespace std;

//   Access specifiers can keep class members under wraps

class GoatClass{
    private:
        // class attributes (protected)
        string name;
        string color;
    public:
        // constructor (public)
        GoatClass(string name_input, string color_input){
            name = name_input;
            color = color_input;
        }

        // method (public)
        void say_hi(){
            cout << "Hi.  My name is " + name + ", a " + color + " goat." << endl;
        }
    protected:
        int private_but_inheritable;
};

int main(){

    // public constructors are available
    GoatClass myBrownGoat("truffle", "brown");     
    GoatClass myWhiteGoat("merangue", "white");

   // public methods are available
    myBrownGoat.say_hi();
    myWhiteGoat.say_hi();

    // private class attributes are NOT available
    // cout << "brown goat name is: " + myBrownGoat.name << endl;
    // cout << "white goat name is: " + myWhiteGoat.name << endl;
    
    // myBrownGoat.color = "hot pink";
    // cout << "brown goat color is: " + myBrownGoat.color << endl;

    return 0;
}