// iterations in cpp

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    vector<string> v;
    v.push_back("joe");
    v.push_back("fred");
    v.push_back("mary");

    // Index loop : works for strict sequences (not list, forward_list, etc.)    
    for (size_t i = 0; i != v.size(); ++i) {
        cout << v[i]  << endl;
       }

    cout << "**********\n";

    // Iterator loop: it is essentially a pointer - dereference to print.
    for (auto it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }   
    cout << "**********\n";

    //Using for_each.  Last arg is function to apply element-wise.
    // function is a lambda, type is deduced, assigns name 'elem' to element address
    // No break/continue/return w/in loop
    for_each(v.begin(), v.end(), [](auto& elem) {
        cout << elem << endl;
    });

    // For loop with automatic indexing; full within-loop control.

    for (auto& elem:v) {
        auto i = &elem - &v[0];   // (diff in addresses) implicitly denominated by pointer width.
        cout << elem << " at index " << i << endl;
    }

    return 0;
}