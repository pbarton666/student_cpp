#include <iostream>
#include <regex>
#include <string>
using namespace std;

void for_basic(){
    // for ( <initialize loop var>, <quit condition>, <increment loop>)
    for (int i = 0; i < 5; i++) {
        cout << i << "\t";
    }
    cout << endl;

    // increment can be anything
    for (int i = 0; i <= 10; i = i + 2) {
            cout << i << "\n";
    }

}
  
int main()
{
    for_basic();
    
}
 