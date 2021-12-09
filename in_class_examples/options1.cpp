// options.cpp 
#include <iostream>
#include <typeinfo>
using namespace std;
  
int main(int argc, char** argv)  
// argc is how many arguments
// argv contains [<name of program> <first arg>  <second arg> ...]
{
    cout << "You have entered " << argc << " arguments:" << "\n";
  
    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "  " << typeid(argv[i]).name() 
                        << "  size: " <<sizeof(argv[1]) 
                        << "\n";
  
    return 0;
}