#include <iostream>
#include <string>

// Function signatures and calls

void doNothing(){
    // just what you think
}

// This will demand one and only one argument
int oneArg(int arg){
    std::cout << "oneArg: " + std::to_string(arg) << std::endl;
    return arg;
}

// This will require zero or one argument
int oneArgDefault(int x=1 ){
    return 0;
   }


// This will require zero, one, or two args as positionals
int oneArgDefaultTwo(int arg=1, int arg2=2 ){
    std::cout << "oneArgDefaultTwo: " + std::to_string(arg)+ std::to_string(arg) << std::endl;
    return arg;
}
// Try these out
int main()
{

    doNothing();
    std::cout << std::endl;

    oneArg(666);
    std::cout << std::endl;

    oneArgDefault();
    oneArgDefault(777);
    std::cout << std::endl;

    oneArgDefaultTwo();         //use both defaults
    oneArgDefaultTwo(111);      //override first; use second
    oneArgDefaultTwo(111, 222); //override both
    std::cout << std::endl;

    return 0;

}
   