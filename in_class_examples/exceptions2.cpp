#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> vec;
	vec.push_back(0);	
	vec.push_back(1);	
	// access the third element, which doesn't exist
	try
	{
		int trial = vec.at(2);		
	}
	catch (exception& ex)
	{
		cout << "Exception occurred! \t" << ex.what()  << endl;
	}

    cout << "... but the program keeps on truckin'";

	return 0;
}