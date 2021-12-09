#include <iostream>
#include <iterator>
#include <string>
#include <regex>

using namespace std;

// regex, regex_search, regex_replace, 
 
int main()
{
    //basic search
    regex reg("x"); 
    string target = "Texas";
    auto result = 0;
    result = regex_search(target, reg);
    if (result) cout << "Yay Texas!" <<endl;
    cout << endl;

    // case-insensitive search
    result = regex_search("Mexico", regex("x", regex::icase));
    if (result) cout << "Viva Mexico!" << endl;  
    cout << endl;

    // find matches
    cmatch match;
    result = regex_search("one two three", match, regex("two"));
    if (result) {
        cout << match[0] << endl;
        cout << match[1] << endl;
        cout << match[2] << endl;
    }
    // replace
    string new_stg; 
    new_stg = regex_replace("one two three", regex("two"), "TWO");
    cout << new_stg << endl;

    // using tokens
    regex reg1("[e|x][e|x]"); 
    //regex reg1("[a-z]"); 
    string target1 = "Texas";
    string replace_with = "!!";
    new_stg = regex_replace(target1, reg1, replace_with);
    cout << new_stg << endl; 

    return 0;


}