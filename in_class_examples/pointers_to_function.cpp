#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::to_string;

string fun(int a){
    return to_string(a);
}

string fun1(int a, int b){
    return to_string(a + b);
}

void fun2(int a, int b, float c){
    cout << "fun2 reporting.";
}

int main(){
    // pointer declarations are a little funky - you have to declare them with the
    //    entire signature of the function
   string (*fun_ptr)(int) = &fun;   // parens force order of operations - parens trump *
   (*fun_ptr)(555);
   
   string (*fun_ptr1)(int, int) = &fun1;   // parens force order of operations - parens trump *
   (*fun_ptr1)(555, 777);
   
   void (*fun_ptr2)(int, int, float) = &fun2;   // parens force order of operations - parens trump *
   (*fun_ptr2)(555, 777, 12.34);
    return 0;
}