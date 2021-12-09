#include <iostream>
#include <string>

using namespace std;

int main()
{
    // For loop  ()

    cout << "For loop output"  << endl;
    for ( int i = 0; i < 10; ++i ) {
        cout << i+1 << endl;  // reports but does not change i
    }
    cout << endl;

    // For loop with break (allows tautologically true condition)

    cout << "For loop with break output"  << endl;
    for ( int i = 0; i < 10; ++i ) {
        cout << i+1 << endl;  // reports but does not change i
        break;
    }

    cout << "For loop with continue"  << endl;
    for ( int i = 0; i < 10; ++i ) {
        cout << "about to hit continue\t";
        continue;
        cout << i+1 << endl;  // reports but does not change i
        break;
    }
    cout << endl;



    // Nested loops.   NB looping vars can be sensible.  

    int cols {4};
    int rows {3};

    cout << "Array with element indices as values: \n";
    for (int col = 0; col <= cols; col++ ) {
        for (int row = 0; row <= rows; row++) {
             cout << to_string(col) + to_string(row) + "  ";
        }
        cout << endl;     
    }

    // For v/ while discussion;   known or unknown elements?   Complexity of update logic?
    // Clarity for you and readers?

// While loop

    /* Syntax (NB: single line of 'stuff' does not require {}):
        while ( <condition is true> ) {
            <do this stuff>
        }
    */
   int a {-2};
   while (a){     //eval at top
       cout << "'while' sentinal value is now: " + to_string(a) << endl;
       a += 1;
   }
    cout << endl;


   // Do While loop

    /* Snytax:
            do {
                <do this stuff>
            }   while ( <condition is true> )
    */
    int b{-2};
    do {
        b++;
      cout << "'do while' sentinal value is now: " + to_string(b) << endl;
    }  while (b);   //eval at bottom - goes at least once
    
    cout << endl;
    
    // While with break

    int c {-2};
    while (c){     //eval at top
        a += 1;
        cout << "'while' sentinal value is now: " + to_string(c) << endl;
        cout << "Taking a break ..." + to_string(c) << endl;
        break;
   }  

    cout << endl;



    
}