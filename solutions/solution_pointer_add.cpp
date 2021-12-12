#include <iostream>
using namespace std;
 
//   Add two numbers with pointers
void add(int *num1, int *num2, int *sum) {
   //  ingest pointers and sum, adjust sum 
   *sum = *num1 + *num2;   
}
 
int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = 0;

   
    add(&num1, &num2, &sum);

    cout <<  num1 << " + " << num2 << " = " << sum << endl;

    return (0);
}