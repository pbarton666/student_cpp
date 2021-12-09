#include <iostream>
#include <string>

using namespace std;

int main()
{
    // code blocks can be null"
    if (1==2){}
        else if (1==2){}

    // Comparisons use infix notation
    /*   ==  !=   >=   <=   !true */
    int x ( 3 );

    // Code block for passing test can be a single line
    if (x == 7) 
        cout << "We match!  Yay.";

    cout << "\n ***** \n"  << endl;

    // Braces are recommended, even for single lines
    if (x != 7) {
        cout << "We don't match!" << endl;
        cout << "bummer, man!"  << endl;
    }  

   cout << "\n ***** \n"  << endl;
   
   // conditions can be made with logical ops 
   x = 6;
   if ( ( !(x % 2) || (x % 3) )  && (x > 5 ) ){
       cout << "Yea!  Complexity rocks.";
   }
    
    cout << "\n ***** \n"  << endl;
    
    // The else clause is optional
    if (x == 7){
        cout << "We still match!" << endl;
    }
    else {
        cout << "We still did not match."  << endl;
    }



    cout << "\n ***** \n"  << endl;

    // We can nest to an arbitrary level
    if (x == 7){
        cout << "We still match! \n"  << endl;
    }
    else {
        if (x == 5){
            cout << "We matched at 5"  << endl;
        }
        else {
            if (x == 3) {
                cout << "We matched at 3."  << endl;
            }
            else {
                cout << "We still did not match."  << endl;
            }
        }
    }

    cout << "\n ***** \n"  << endl;

    // We can use else if to tighten things up a bit.

    if (x == 7){
        cout << "We still match! \n"  << endl;
    }   else if (x == 5){
            cout << "We matched at 5"  << endl;
    }   else if (x == 3) {
            cout << "We matched at 3."  << endl;
    }   else {
            cout << "We still did not match."  << endl;
    }
 

    cout << "\n ***** \n"  << endl;

    // Switch.   NB no 'case level' code blocks.   Need break.
    //   No need to nest.  BUT switch condition only works with int and char constants
    int a { 1 };
    switch (a) {
        case 1:
            cout << "Case matched at 1."  << endl;
            break;
        case 2:
            cout << "Case matched at 2."  << endl;
            break;
        default:
            cout << "Case did not match."  << endl;
            break;
    }

    // Switch also works on an enum type
    enum Animal {Cat, Dog, Wolf};
    Animal critter { Cat };

    switch (critter) {
        case Cat:
            cout << "Cat says 'derp'"  << endl;
            break;
        case Dog:
            cout << "Dog says 'WOOF!'"  << endl;
            break;
        case Wolf:
            cout << "Wolf says Awwwwwoooo'"  << endl;
            break;

    default:
            cout << "Sorry, we don't know your critter."  << endl;
            break;
    }

    // Conditional expressions are used for 'one-liners' so squeeze an if..then
    //    statement into one line of code.     NB:  These are not statements and do
    //   not end with a ;

    // Syntax:    (<condition>)  ?    <expression if true>  :   <expression if false>

    int xx{ 2 };
    int yy { 3 };
    int zz = ( xx > yy ) ? xx : yy;


    cout << "zz from conditional expression: " + to_string(zz)  << endl;
    //this is equivalent to:
    int u { 2 };
    int v { 3 };
    int t;
    if (u > v)
        t = u;
    else
        t = v;

    cout << "t from conditional expression: " + to_string(t)  << endl;

    // The idea is that these can be embedded anywhere
    // ( xx > yy ) ? xx : yy

    cout << "The biggest number is " + to_string(  (xx > yy ) ? xx : yy   );

}