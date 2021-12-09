#include <iostream>
#include <fstream>
#include <string>
#include <regex>

// explicit short-hand access to libraries
////using std::cout;
//using std::endl;
//using std::cin;
//using std::ofstream;
//using std::ifstream;
//using std::fstream;
////using std::string;
//using std::flush;
/*std::vector<std::string> string_split(const std::string& str) {
	std::vector<std::string> result;
	std::istringstream iss(str);
	for (std::string s; iss >> s; )
		result.push_back(s);
	return result;
}
	*/

using namespace std;

int readFile(string fn){
    // read a file
    string line;
	size_t pos;
	cmatch match;
	int count=0;
	int sum=0;
	auto result=0;

    ifstream myfile(fn);             // set up the input stream
    if (myfile.is_open()){           // everything good?
       while (getline (myfile, line)) {    
			pos = line.find("State");
			if (pos != std::string::npos){
		cout << line << endl;
			}
        }
        myfile.close();
    }
    else cout << "Epic fail - can't open file.";
    return 0;
}


int main() {
	readFile("football.txt");
	return 0;
}