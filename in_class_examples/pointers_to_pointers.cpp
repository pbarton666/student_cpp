#include <iostream>
using std::cout;
using std::endl;

// pointer to pointer
int main()
{
    int var = 666;
  
    // pointer for var, pointer-to-pointer 
    int *ptr2;
    int **ptr1;
  
    // store address of var in ptr2
    ptr2 = &var;
      
    // Store address of ptr2 in ptr1
    ptr1 = &ptr2;

    cout << "var is: " << var << endl;
    cout << "var via dereferencing pointer:  " << *ptr2 << endl;
    cout << "var via double-dereference of pointer: "  << **ptr1 << endl;
    
  return 0;
} 