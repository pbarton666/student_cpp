#include <iostream>
#include <string>

using namespace std;

// Add a constructor (function to set initial parameters)
class GoatClass{
    public:
        // class method (doesn't return anything, hence 'void')
        void say_hi(){
            cout << "Hi.  My name is " + name + ", a " + color + " goat." << endl;
        }

        // class attributes
        string name;
        string color;

        // constructor
        GoatClass(string name_input, string color_input){
            name = name_input;
            color = color_input;
        }
};

int main(){

    GoatClass myBrownGoat("truffle", "brown");     
    GoatClass myWhiteGoat("merangue", "white");

    myBrownGoat.say_hi();
    myWhiteGoat.say_hi();

    // From outside the class, the public members are available.  We can print them:
    cout << "brown goat name is: " + myBrownGoat.name << endl;
    cout << "white goat name is: " + myWhiteGoat.name << endl;
    cout << "****\n";
    cout << "brown goat color is: " + myBrownGoat.color << endl;
    cout << "white goat color is: " + myWhiteGoat.color << endl;
    cout << "****\n";

    // ... which is not always a great idea;
    cout << "After a quick change ..." << endl;
    myBrownGoat.color = "hot pink";
    cout << "brown goat color is: " + myBrownGoat.color << endl;

    return 0;
}