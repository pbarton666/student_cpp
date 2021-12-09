#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
	string sp("hail to the victors, valiant...");
	regex re("(hail)(.*)");  // hail and everything else

	smatch match;

	if (regex_search(sp, match, re) == true) {
        //size is number of matching groups
		cout << "Match size = " << match.size() << endl;
		cout << "Whole match : " << match.str(0) << endl;
		cout << "First capturing group is '" << match.str(1)
			<< "' which is captured at index " << match.position(1)
			<< endl;
		cout << "Second capturing group is '" << match.str(2)
			<< "' which is captured at index " << match.position(2)
			<< endl;
	}
	else {
		cout << "No match is found" << endl;
	}
	return 0;
}
