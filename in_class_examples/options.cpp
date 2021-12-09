// options.cpp 
#include <iostream>

using std::cout; 

//int main(int argc, char* argv[])  
int main(int argc, char** argv)  {   //arg count, args as vector of chars
    
    cout << "You have entered " << argc << " arguments:" << "\n";
  
    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";
  
    return 0;
}