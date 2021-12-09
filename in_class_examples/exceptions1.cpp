#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::cin;

int main(){
    int CORRECT = 20;
    try {
        int guess = 15;
        if (guess == CORRECT) {
            cout << "Yay!";

        } else {
            throw (guess);  
        }
    }

    catch (...) {  // The '  (...)   ' accepts any type of exception 
    cout << "The correct answer is " <<  CORRECT << endl;
    } 
    return 0;
} 
