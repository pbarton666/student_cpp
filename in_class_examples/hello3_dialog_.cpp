// hello3_dialog_.cpp
#include <iostream>
#include <string>

int  main(){
    std::string resp;   // ClassName   functionName long_var_name
    std::cout << "Hello from hell3_dialog! Whaddya say?  " << std::endl;
    std::cin  >> std::ws >> resp;  //"3"  '3'  
    std::cout << "You said " << resp << " ... is that right?";
    return 0;
}