// string_examples.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 = "Mars";
	string s2 = "Venus";

	cout << s1.size() << endl; 
	cout << s2.length() << endl;

	s1 = s1 + s2;
	cout << s1 << endl; 

	s1.append(" - go Mars");
	cout << s1 << endl; 

	// compare two strings
	if (s1.compare(s2) == 0)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	string sub = s1.substr(0, 3);  // substr(<position>, <length>)
	cout << sub << endl; 

	s1.insert(10, "For");
	cout << s1 << endl; // instert(<position>, <thing>)

	string target = "ar";

	// find a target string 
	size_t pos = s1.find(target); //size_t is unsigned int type of the sizeof() return.
	if (pos != std::string::npos) // npos=-1
		cout << "Target is here:" << pos << endl; // pos=5

	// replace a portion of string s1
	// replace(pos, length_of_portion, string_to_replace)
    string s3 = "00000";
	cout << s3.replace(1, 3, "_YAY_") << endl;  // replace (<pos>, <len>, <new>)

	// delete a section of the string
	string s4 = "Grateful Dead";
	string delimiter = " ";
	size_t pos4 = s4.find(delimiter);
	s4.erase(0, pos4 + delimiter.length());
	cout << "the original has been changed in place: " << s4 << endl;
    
	return 0;
}
