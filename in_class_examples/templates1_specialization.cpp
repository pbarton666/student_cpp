#include <iostream>

using namespace std;

// need to return same type from all these; inputs can vary

template <typename T>
float    myfunction(T arg, T arg1)
{
    cout << "Generic version fields: " << arg << " " << arg1 << '\n';
    float result;
    result = arg * arg1;
    return result;
}

template <>
float  myfunction(int arg, int arg1)
{
    cout << " specialized int fields: " << arg << " " << arg1 << '\n';
     float result;
     result = arg * arg1;
     return result;
}

template <>
float  myfunction(double arg, double arg1)
{
    cout << " specialized float  fields: " << arg << " " << arg1 << '\n';
     float result;
     result = arg * arg1;
     return result;
}

// two types
template <typename T1, typename T2>  
int func1 (T1 arg1, T2 arg2){
    cout << "generic two type: "  << arg1 << "  " << arg2;
    return 0;
}
template <>
int func1(int arg1, float arg2){
    cout << "int float, two type: "  << arg1 << "  " << arg2;
    return 0;
}
template <>
int func1(float arg1, int arg2){
    cout << "float, int two type: "  << arg1 << "  " << arg2;
    return 0;
}



int main()
{
    cout << myfunction<char>('A', 'B') << endl;
    cout << myfunction<double>(345.678, 123.4) << endl;
    cout << myfunction<int>(123, 123) << endl; // specialization

    cout << func1<int, int>(1, 2) << endl;
    cout << func1<float, int>(1.23, 2) << endl;
    cout << func1<int, float>(1, 2.23) << endl;
}