#include <iostream>
#include <string>
#include <vector>

using namespace std;

void s_report(vector<string> vec){
    // Cf. template above for slicker implementation
    for (int i=0; i<vec.size(); i++ ){
        cout << vec[i] << "\t";
    }   cout << endl;
}

void i_report(vector<int> vec){
    // Cf. template above for slicker implementation
    for (int i=0; i<vec.size(); i++ ){
        cout << vec[i] << "\t";
    }   cout << endl;
}

int main(){
    vector<string> employees;

    // one way to get values in:
    employees.push_back("joe");
    employees.push_back("fred");
    employees.push_back("mary");
    employees.push_back("quinn");

    cout << "Employee count: " << employees.size() << endl;

    for (int i=0; i<employees.size(); i++ ){
        cout << employees[i] << "\t";
    }   cout << endl;

    s_report(employees);
// ================================

// We can do a direct assignment, as with arrays 
    vector<int> numbers = {1, 2, 3};
    i_report(numbers);

    // As with arrays, we can index
    numbers[2] = 666;
    i_report(numbers);

    // We can append a new value at any time
    numbers.push_back(88888);
    i_report(numbers);

    // We can pop a value off the end
    numbers.pop_back(); //null return
    i_report(numbers);

    cout << endl;
    s_report(employees);
    cout << "capacity:  " << employees.capacity() << endl;
    cout << "size:  " << employees.size() << endl;
    cout << "second element: " << employees.at(1) << endl;
    cout << endl;
    return 0;
} 