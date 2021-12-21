#include <iostream>
#include <string>

using namespace std;

int main()
{
    if ( 1==2 ){}

    if (1==2){}
        else if (1==1){}

    if (1 == 1){
        cout << "Yea";
    }

    if(1==1){
        cout << "Yea";
        cout << "Haw!";
    }
    int x;
    
    if ( (  !(x % 2) || (x % 3) ) && (x > 5) ){}
    if (  !(x % 2) || ( (x % 3)  && (x > 5) ) ) {}

    if ( x == 7){
        cout << "Hooray!";
    }
    else if (x < 8){}
    else if (x < 9){}
    else{
        cout << "We are false";
    }

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



    if (x == 7){
        cout << "We still match! \n"  << endl;
    }   else if (x == 5){
            cout << "We matched at 5"  << endl;
    }   else if (x == 3) {
            cout << "We matched at 3."  << endl;
    }   else {
            cout << "We still did not match."  << endl;
    }


    // Switch (int or enum)
    int test;
    switch (test){
        case 0:
            cout << "zero!";
            break;

        case 1:
            cout << "one!";
            break;

        case 2:
            break;

        default:
            cout << "Yell at the user!";

    test = 6666;
    }

    enum Animal {Cat, Dog, Zebra};
    Animal critter;
    critter = Cat;
    switch (critter) {
        case Cat:
            cout << "Meow";
            break;
        case Dog:
            cout << "Woof!";
            break;
        default:
            cout << "default";
    }


    return 0;
}
