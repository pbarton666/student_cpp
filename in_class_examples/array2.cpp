#include <iostream>
#include <string>
#include <array>
#include <typeinfo>
#include <algorithm>
#include <iterator>

using namespace std;

void printArr(int, int);
void examineStdArr(array<int, 3>);
void examineArr(int);

void examineArr(int arr[]){
    cout << "We have a C-type array" << endl;
    cout << "here's the array: -->" << arr << endl;
    cout << "here's the type:  " << typeid(arr).name() << endl;
    cout << endl;
}
void examineStdArr(array<int, 3> arr){
    cout << "We have a std::array" << endl;
    cout << "here's the array:  " << endl;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << '\t';
    }
    cout << endl;
    
    for (const auto& element: arr){
        cout << element << "\t";
    }
    cout << endl;
    cout << "here's the type:  " << typeid(arr).name() << endl;
    cout << endl;

    sort(arr.begin(), arr.end());
    cout << "After sort:" << endl;
    for (const auto& element: arr){
        cout << element << "\t";
    }
    cout << endl << endl;

    cout << "Using reverse_copy" << endl;
    reverse_copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, "\t"));

}

void main(){
    int arr[] = {1, 8, 4};
    cout << "From main" << endl;
    cout << "We have a C-type array" << endl;
    cout << "here's the array: -->" << arr << endl;
    cout << "here's the type:  " << typeid(arr).name() << endl;
    cout << endl;


    examineArr(arr);
    array<int,3> stdarr {1, 8, 4};
    examineStdArr(stdarr);
    
}


void printArr(int arr[], int length){
     // an array is passed only by reference; no clue as to size
   // for (unsigned int i=0; i<sizeof(arr)/sizeof(arr[0]); i++ ){
    for (int i=0; i<length; i++ ){
        cout << arr[i] << '\t';
    }
    cout << endl;
}
