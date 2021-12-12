#include <iostream>
using namespace std;
 
//Swap function to swap 2 numbers
void swap(int *num1, int *num2) {
   // use dereferencing to create values based on addresses passed in
   int temp;
   temp = *num1;    // copy dereferenced value of num1 -> temp
   *num1 = *num2;   // copy VALUE of num2 -> num1
   *num2 = temp;    // copy VA
}
 
int main() {
    int num1 = 5;
    int num2 = 10;

   
   cout << "Before:  num1:  " << num1 << "  num2:  " << num2 << endl;
  
    // Our function requires int pointer types (i.e., addresses)
    swap(&num1, &num2);

    cout << "After:  num1:  " << num1 << "  num2:  " << num2 << endl;

    return (0);
}