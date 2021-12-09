#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    // We declare our unordered map (int, string)
    // Here, the key is an int, and the value is a string


    unordered_map<int, string> first_map = {
        {1, "one"},
        {2, "two"} 
    };
    cout << "using .at(): " << first_map.at(1) << endl;
    cout << "using brackets: " << first_map[2] << endl;


    unordered_map<string, string> my_map;
 
    // Syntax:  map [ <key_name> ] = <value>;
    my_map["one"] = "uno";
    my_map["two"] = "dos";
 
    // Report all elements  (cf iterations.cpp)
    cout << "Reporting elements:" << endl;
    for (const auto& it: my_map) {
        cout << it.first << ": " << it.second << endl;
    }

    // Returning values from map
    cout << "Returning values" << endl;
    cout << my_map["one"] << endl;

    // Use find()
    cout << "Using find():" << endl;
    auto it1 = my_map.find("two");

    // print last element or 'not found'
    auto it2 = my_map.find("two");
    if (it2 != my_map.end())
        cout << it2->first << " : " << it2->second << endl;
    else  cout << "key not found."  << endl;
 
    auto it3 = my_map.find("xxxxx");
    if (it3 != my_map.end())
        cout << it3->first << " : " << it3->second << endl << endl;
    else  cout << "xxxx not found."  << endl;
 
    // remove an element
    my_map.erase("one");
    
    cout << "Reporting elements:" << endl;
    for (const auto& it4: my_map) {
        cout << it4.first << ": " << it4.second << endl;
    }


    unordered_map<string, string> nato = {
        {"a", "alpha"}, {"b", "bravo"}, {"c", "charlie"}};

    //  print just values
    vector<string> values;
    cout << "Reporting elements:" << endl;

    // loop over the map using an iterator on the map, adding val to vector
    for (const auto& it_nato: nato) {
        values.push_back(it_nato.second);
    }

    // print using an iterator in the vector
    cout << endl << "values only" << endl;
    for(const auto& v: values) {
        std::cout << v << "\n";
    }
    // print using an index based on vector metadata
    for(size_t i = 0; i < values.size(); ++i) {
        std::cout << values[i] << "\n";
    }


    return 0;
}