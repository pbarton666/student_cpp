string check_valid(string look_for, unordered_map<string, string> look_in){
        bool done = false;
        while (! done){
            string message = "";
            auto found = look_in.find(look_for); 
            if (found == look_in.end()){
                  for (const auto& element: look_in) {
                        message += " " + element.first;
                  }
    
                cout << "Fail, dude. Choices are:" << endl;
                cout << message;
                cout << "Please try again:  ";
                cin  >> look_for;
                } 
            else {
                    done = true;
                    }

        return look_for;
        }

}

int interactive(){
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


    //  make vectors of the keys
    vector<string> keys_lang, keys_spanish, keys_japanese;
    for (const auto& element: lang) {
        keys_lang.push_back(element.first); 
        }    

    // extract a single element
    string lang_choice;
    string word_choice;
    cout << "Which language? " << endl;
    lang_choice="spanish"; //cin >> lang_choice;

    lang_choice = check_valid(lang_choice, lang);

    typedef(land[lang_choice]) right_dict;

    cout << "Look up word? "  << endl;
    word_choice = "two"; // cin >> word_choice;
    word_choice = check_valid(word_choice, right_dict);

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
}