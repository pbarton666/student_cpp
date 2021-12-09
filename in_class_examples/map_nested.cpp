#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {


    unordered_map<string, string> spanish;
    unordered_map<string, string> japanese;
    spanish["one"] = "uno";
    spanish["two"] = "dos";
    spanish["three"] = "tres";
    spanish["four"] = "quatro";
    japanese["one"] = "ichi";
    japanese["two"] = "ni";    
    japanese["three"] = "san";    
    japanese["four"] ="shi";    // 四


    unordered_map<string, unordered_map<string, string>> lang;
    lang["spanish"] = spanish;
    lang["japanese"] = japanese;

    // extract a single element
    string lang_choice, word_choice;
    cout << "Which language? " << endl;
    lang_choice="spanish"; //cin >> lang_choice;
    cout << "Look up word? "  << endl;
    word_choice = "two"; // cin >> word_choice;

    cout << "The " << lang_choice << " word for " << word_choice << " is: ";
    cout << lang[lang_choice][word_choice] << endl;
    
    // Print out all the elements
    // auto type automatically defines itself as a return type of lang.begin ()
    for(auto itr1 = lang.begin(); itr1 != lang.end(); itr1++)       
    {
        cout << itr1->first << ": "; 
        // itr1->second represents map<string, vector<string>> stored in lang.
        for(auto itr2 = itr1->second.begin (); itr2 != itr1->second.end (); itr2++)
            {
            cout << itr2->first <<" ";
            }
        cout << endl;
    }


    return 0;
}