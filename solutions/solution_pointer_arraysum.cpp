#include <iostream>
using namespace std;
 
int main() {
    int arr[5];
    int sum;
    int *ptr;

    int init = 0;
    int stride = 10;

    arr[0] = init;
    for (int i=1; i<5; i++)
        arr[i] = arr[i-1] + stride;

    ptr = arr;

    sum = *ptr;

    for (int i=0; i<5; i++){ 
        sum = sum + *(ptr + i);
        cout << " + " <<  *(ptr + i);
    }
    cout << " =  " << sum << endl;
    cout << endl;

    // print backwards
    for (int i = 4; i>= 0; i--)
        cout << *(ptr + i) << "\t";

    return (0);
}