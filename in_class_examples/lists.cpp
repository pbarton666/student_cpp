

// list and forward_list objects are sequences or homogenous elements.   
// Both support insertion and deletion.   Both iterate.  Neither will index
// forward_list objects only iterate forward; list objects iterate both ways.
// Stored in non-contiguous memory.  Part of the Standard Template Library.

// In other words, they only know how to get to the next element.

#include <iostream>
#include <list>
#include <vector>
//#include <algorithm>
#include <string>

using namespace std;

void makeList(){
    // make empty list and fill elements one at a time
    list<int> aList;
    for (int i=0; i<10; i++)
        aList.push_back(i);

    for (int val : aList)
        cout << val << "   ";
    cout << endl;
}

void initList(){
    // initialize with fill constructor
    // Syntax:   list<element_type>  <name> (<#_elements, <value>)
    list<int> aList(3, 667);
    for (int val : aList)
        cout << val << "   ";
    cout << endl;
}

void loadList(){
    // load a list with individual values
    list<int> aList = {1, 3, 4, 5, 66, 0};
    for (int val : aList)
        cout << val << "   ";
    cout << endl;
}

void loadListArray(){
    // load a list with individual values

    // an array of integers
    int arr[] = {-2, -1, 0, 1, 2};

    // use integer values
    // Syntax:  list<<elem_type>> <name>(<arr_name>, <#_arr_elements)
    list<int> aList(arr, arr + sizeof(arr) / sizeof(int));

    for (int val : aList)
        cout << val << "   ";
    cout << endl;
}

template <typename T>
bool contains(list<T> & listOfElements, const T & element)
{
    // Find the iterator if element in list
    auto it = find(listOfElements.begin(), listOfElements.end(), element);
    return it != listOfElements.end();
}

void testContains(){
    //  Does "quinn" exist?
    list<string> dogs = {"karma", "46", "sara", "24", "quinn", "80"};
    bool result = contains(dogs, string("quinn"));
    cout << "dogs contains 'quinn'?  "  << result;
}

void modifyNextElement(string look_for, int add_to){
    // find an element then modify next
    list<string> dogs = {"karma", "46", "sara", "24", "quinn", "80"};
    list<string>::iterator p = dogs.begin();


    cout << "\n\n" << "Original contents: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }

    bool go_for_next = false;
    p = dogs.begin();
    while(p != dogs.end()) {
        if (*p == look_for){
            cout << "\n\n" << "found " << look_for << endl;
            go_for_next = true;
            p++;
        }
        if (go_for_next){
            cout << "adding " << add_to << " to existing value of " << *p << endl;
            *p = to_string(stoi(*p) + add_to);
            break;
        }
        p++;
    }
    
    cout << "\n" << "Contents modified: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }
}


void insertElement(string add_name, string add_wt, int before_here){
    // Insert a new element
    list<string> dogs = {"karma", "46", "sara", "24", "quinn", "80"};
    list<string>::iterator p = dogs.begin();

    cout << "\n\n" << "Original contents: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }

    cout << "\n" << "Before here:  " << before_here << endl;
    p = dogs.begin();
    advance(p, before_here);
    dogs.insert(p, add_name);
    dogs.insert(p, add_wt);

    cout << "" << "Contents modified: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }
}


void sortList(){
    // Insert a new element
    list<string> dogs = {"karma", "46", "sara", "24", "quinn", "80"};
    list<string> dogs_copy = dogs;
    list<string>::iterator p = dogs.begin();

    cout << "\n\n" << "Original contents: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }

    dogs.sort();
    cout << "" << "\nContents sorted: "; 
        p = dogs.begin(); 
        while(p != dogs.end()) { 
            cout << *p << " ";  p++; 
            }

    dogs_copy.reverse();
    cout << "" << "\nContents reversed: "; 
        p = dogs_copy.begin(); 
        while(p != dogs_copy.end()) { 
            cout << *p << " ";  p++; 
            }
}
int main(){
    makeList();       
    initList(); 
    loadList();
    loadListArray();
    testContains();
    modifyNextElement("sara", 100 );
    insertElement("new_dog", "200", 2);
    sortList();
}
