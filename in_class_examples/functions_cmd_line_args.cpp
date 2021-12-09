// functions_cmd_line_args.cpp
#include <iostream> 
using namespace std; 
 
// argc:  how many arguments (including program name)?
// argv:  a pointer to each argument, gathered in an array 
// usage:  functions_cmd_line_args("abc", 123, 'hey') or no args.

int main(int argc, char** argv) { 
    cout << "Number of args: " << argc<<endl; 
       
    for (int i = 0; i < argc; ++i) 
        cout << "argv[" <<i<< "] : "<<argv[i] << "\n"; 

    return 0; 
}