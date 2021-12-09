#include <iostream>
#include <cassert>

using namespace std;

// two types
template <typename T1, typename T2, typename T3>  
string tres_func (T1 arg1, T2 arg2, T3 arg3){
    cout << "generic tres_func: "  << arg1 << "  " << arg2 << endl;
    return "generic";
}
template <>
string tres_func(int arg1, float arg2, float arg3){
    cout << "int float, tres_func: "  << arg1 << "  " << arg2 << endl;
    return "iff";
}
template <>
string tres_func(float arg1, float arg2, float arg3){
    cout << "float, int tres_func: "  << arg1 << "  " << arg2 << endl;
    return "fff";
}

int test_templates(){
    int i = 1;
    float f = 2.1;
    assert (tres_func(i, i, i) == "generic");
    assert (tres_func(i, f, f) == "iff");
    assert (tres_func(f, f, f) == "fff");
    cout << "Yay!  All tests passed!" << endl;
}
int main(){
    test_templates();
}