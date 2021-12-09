// hello2_anno.cpp

#include <iostream>    // supports I/O operations   

using namespace std;   // imports whole standard library (not recommended)

int main()
{
    // fully-specified reference to cout, adding std::endl  (\n + flushes buffer)
    //    uses the insertion operator <<  to stream data
    std::cout << "Hello World from hello2!  You good?" << endl;

    // fully-specified reference to the string type with assignment
    std::string resp = "Awesome";

    // concatenation of string objects, sent to cout
    std::cout << "I'm deligheted that you're " + resp + "!";
    return 0;
}