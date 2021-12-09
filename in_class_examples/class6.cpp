#include <iostream>
#include <string>

using namespace std;

//   Access specifiers can keep class members under wraps

class GoatClass{
    private:
        // class attributes (private)
        string name;
        string color;        
        string placeholder_color = "brown";

    public:
        // method (public)
        void say_hi(){
            cout << "Hi.  My name is " + name + ", a " + color + " goat." << endl;
        }

        // setter for color (public)
        void setColor(string trial_color){
            if (trial_color != "white" && trial_color != "brown" && trial_color != "white"){
                cout << "Sorry. " + trial_color + " is a stupid color for a goat." << endl;
                cout << "We're making it " + placeholder_color + ".\n";
                color = placeholder_color;
            }
            else {
                color = trial_color;
            }
        }
        // getter for color (public) - internal method, so can access private members
        string getColor(){
            return color;
        }

        // setter for name (public)
        void setName(string trial_name){
            name = trial_name;
        }

        // getter for name (public)
        string getName(){
            return name;
        }

};

int main(){

    // public constructors are available
    GoatClass myBrownGoat;
    GoatClass myWhiteGoat;

    myBrownGoat.setName("Truffle");
    myBrownGoat.setColor("brown");
    myWhiteGoat.setName("Merangue");
    myWhiteGoat.setColor("white");

   // public methods are available
    myBrownGoat.say_hi();
    myWhiteGoat.say_hi();

    // the color attribute is now protected
    myBrownGoat.setColor("hot pink");

    myBrownGoat.say_hi();

    return 0;
}