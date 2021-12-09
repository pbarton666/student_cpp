//#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    int number;
    srand(0);   //create a random seed
    number = rand() % 1000 + 1;
    cout << "number is :" << number;
    int guess;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess < number)
            cout << "Too small!" << endl;
        else if (guess > number)
            cout << "Too large!" << endl;
        else
            cout << "Yay! perfect!" << endl;
      } while (guess != number);
      return 0;

}
  
 