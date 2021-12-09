#include <iostream>  

#include "class9a_combine.cpp"  // "user-defined files"; replced with file contents
#include "class9b_combine.cpp"

using std::cout;
using std::endl;

int main(){
    IntRoutines int_routine_instance;   // from 9a
    FloatRoutines float_routine_instance;  // from 9b

    int result;
    result = int_routine_instance.addInts(3, 4);
    cout << "3 plus 4 is " << result << endl;

    float fresult;
    fresult = float_routine_instance.addFloats(3.01, 4.);
    cout << "3.01 plus 4 is " << fresult << endl;

    return 0;
   }