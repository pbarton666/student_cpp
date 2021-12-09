#include <iostream>
#include <string>
#include <exception>

using namespace std;

int CORRECT = 20;

int tester(int guess){
    try {
        if (guess == CORRECT) {
            cout << "You guessed the correct answer: " << guess;
            cout << " Yay!" << endl;

        // exception handling can happen in an else clause    
        } else {
            cout << "Bummer, man.  "  ;
            throw (guess);  // this calls the catch block (just like any function)
            cout << "This line won't ever execute.";
        }
    }

    catch (int myNum) {  // this anticipates an integer.
      cout << "The correct answer is " <<  CORRECT << " You guessed: " << myNum << endl;
    } 

    // possible to use multiple catch if overloaded
    
     return 0;

}

int main(){
    tester(10);
    tester(20);
    return 0;

} 
