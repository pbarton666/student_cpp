#include <iostream>
#include <string>

using namespace std; 

void printArr(int arr[], int length){
     // an array is passed only by reference; no clue as to size
   // for (unsigned int i=0; i<sizeof(arr)/sizeof(arr[0]); i++ ){
    for (int i=0; i<length; i++ ){
        cout << arr[i] << '\t';
    }
    cout << endl;
}

int main(){
    // Syntax:
    // <type> [ <number of elements> ];   or
    // <type> [] = {elem1, elem2, ...}

    // This array 'self-sizes'
    int arr[] = {1, 2, 4};
    int arr_arr[3];  // we can add values later
    
    
    // Looping is a pain because sizeof(a) yields its total size in bytes
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++ ){
        cout << arr[i] << '\t';
    }
    cout << endl;

    // This array has 5 elements.  NB it's not initialized
    int arr1[5];
    for (int i=0; i<sizeof(arr1)/sizeof(arr1[0]); i++ ){
        cout << arr1[i] << '\t';
    }
    cout << endl;

    // This is partly initializae = default elements now zero. 
    cout <<  "\n\n********\n ";
    int arr2[5] = {1};
    arr2[3] = 333;

    for (int i=0; i<sizeof(arr2)/sizeof(arr2[0]); i++ ){
        cout << arr2[i] << '\t';
    }
    cout << endl;

    // Multidimensional arrays work the same way
    cout <<  "\n\n******** \n";
    const int ROWS = 3; const int COLS = 2;
    int arr2d [ROWS][COLS] = {0};

    arr2d[2][1] = 12;
    
    for (int i=0; i<ROWS; i++ ){
        for (int j=0; j<COLS; j++){
            cout << arr2d[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}
