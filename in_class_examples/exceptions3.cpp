#include <iostream>
#include <exception>     // for exception class
using namespace std;

// inherit from exception class
class newException : public exception
{
	virtual const char* what() const throw()  
    //what() is a virtual method of exception - we overwrite it here.
	{
		return "newException occurred";
	}
} newex;

int main() {

	try {
        // if <some bad event> ...
		throw newex;
		}
	catch (exception& ex) {
        // handle it here.
		cout << ex.what() << '\n';
	}
	return 0;	
}