// hello2_anno.cpp

#include <iostream>    // supports I/O operations  
#include <string> 

using namespace std;   // imports whole standard library (not recommended)

int main()
{
    // fully-specified reference to cout, adding std::endl  (\n + flushes buffer)
    //    uses the insertion operator <<  to stream data
    std::cout << "Hello World from hello2!  You good?" << endl;

    // fully-specified reference to the string type with assignment
    std::string resp = "Awesome";

    // concatenation of string objects, sent to cout
    std::cout << "I'm delighted that you're " + resp + "!";
    cout << "Say hey " << to_string(123);
    
    return 0;
}