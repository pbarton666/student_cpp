#include <iostream>
#include <string>
#include <vector>

using namespace std;

// declarations of reporting used in vector1.cpp
//   s_report(vector<string> vec);
//   i_report(vector<int> vec);


// ... can replace with template
template<class Type>
Type report ( Type x )
{
    cout << endl;
    for (int i=0; i<x.size(); i++ ){
        cout << x[i] << "\t";
    }   
    cout << endl;
    return (x); 
}



void main(){

    //review (vector1.cpp)
    vector<string> employees;

    // one way to get values in:
    employees.push_back("joe");
    employees.push_back("fred");

    cout << "Employee count: " << employees.size() << endl;

    // alt .at(0)
    cout << "Index to first employee  " <<  employees[0] << endl;

    // direct assignment 
    vector<int> numbers = {1, 2, 3};
    report(numbers);

    // We can pop a value off the end (can't capture, though)
    numbers.pop_back();
    report(numbers);

    //  track size/resources
    cout << "capacity:  " << employees.capacity() << endl;
    cout << "size:  " << employees.size() << endl;
    cout << endl;

//  This ns new material
// =================================
    // Add multiple elements with constructor.  
    //Syntax:
    // vector<type_of_element> name ( <#_elements_to_write>, <value_to_write>);
    vector<int> ivector (3,100);
    report(ivector);

// ====================================
    // create an iterator object (sort of a pointer)
    vector<int>::iterator it;
    it = ivector.begin();

// ================================
//  Use iterator pointer and insert() to manipulate elements.

    // Syntax:
    // .insert( <position>, <value>)   // inserts before this point i.e., begin()
    it = ivector.insert ( it , 200 );
    report(ivector);

    // Syntax:  (fills multiple values)
    // .insert ( <position>, <#new_elements>, <value>    )   //inserts before this point
    ivector.insert (it, 2, 300);   // it still points at 200, so inserts at begin()
    report(ivector);

    // "it" no longer valid, get a new one:
    it = ivector.begin();

    // New vector. Syntax:  (initializes 2 elements of 500)
    // vector<type_of_element> name ( <#_elements_to_write>, <value_to_write>);
    vector<int> new_vector (2 ,400);
    report(new_vector);

    // Syntax (uses template as constructor):
    // .insert ( <position>, <size>, <value>    )  // insert before begin()+2 ... all of new_vector, 
    ivector.insert (it+2, new_vector.begin(), new_vector.end());
    report(ivector);

    // =======================

    // insert a standard array into a vector
    int myarray [] = { 501,502,503 };
    // Syntax:
    // .insert ( <position>, <size>, <value>    )    // inserts at beginning
    ivector.insert (ivector.begin(), myarray, myarray+3);
    report(ivector);
}