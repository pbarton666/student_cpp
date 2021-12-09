#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int flip_nato(){

    unordered_map<string, string> nato = {
        {"a", "alpha"}, {"b", "bravo"}, {"c", "charlie"}};

    //  capture keys and values separately
    vector<string> values;
    vector<string> keys;
    for (const auto& it_nato: nato) {
        values.push_back(it_nato.second);
        keys.push_back(it_nato.first);
    }

    unordered_map<string, string> nato_decode;
     // get an index on one of the vectors 
    for(size_t i = 0; i < values.size(); ++i) {
        nato_decode[values[i] ] = keys[i];
    }
    for(const auto& v: nato_decode) {
        std::cout << v.first << ":" << v.second << "\n";
    }
    return 0;
}

int main(){
    flip_nato();
}    
