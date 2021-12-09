#include <iostream>
// uncomment to disable assert()
// #define NDEBUG
#include <cassert>
 
// Use (void) to silent unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))
 
int main()
{
    assert(2+2==4);
    std::cout << "Passed checkpoint 1\n";
    assertm(2+2==5, "Checkpoint 2");
    std::cout << "Passed checkpoint 2\n";
}