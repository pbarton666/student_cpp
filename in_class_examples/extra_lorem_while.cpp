void lorem(){
    string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. "
                  "Sed laoreet sem leo, in posuere orci elementum.";
    string space_delimiter = " ";
    vector<string> words{};

    size_t pos = 0;
    while ((pos = text.find(space_delimiter)) != string::npos) {
        words.push_back(text.substr(0, pos));
        text.erase(0, pos + space_delimiter.length());
    }
    for (const auto &str : words) {
        cout << str << "\t";
    }
    cout << endl;

}