#include <iostream>
#include <string>

using namespace std;

//  Add a class method with parameters

int var_exposed_globally = 666;

class GoatClass{
    public:
        // This method returns an integer 'int weight';  it gets in integer as input '(int maxWeight)'
        // Placeholder declaration is here:
        string report_weight(int maxWeight);   // merely declared here; defined elsewhere.
        int my_class_member = 5;
};

// We can define a class method against the placeholder.   Note that the signature matches.
string GoatClass::report_weight(int maxWeight){
    cout << "Class member " << my_class_member << endl;
    cout << "Global variable " << var_exposed_globally << endl;
    // maWeight is a string, so we have to concat it to return a string
    return "GoatClass::report_weight() says: "  + to_string(maxWeight) + ". Baaaaa.\n";


};

int main(){

    // Create instances of MyClass and put them through paces.
    GoatClass myGoat;     // create a class instance (really an 'object')
    string returned_value = myGoat.report_weight(200);
    cout << returned_value << endl;

    return 0;
}