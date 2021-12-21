#include <iostream>
#include <string>

using namespace std;

class Dog;     // declaration  - no memory specified
class Dog{};    // definition - allocaets memory
Dog myDog;     // instansiation - creates usable object

int main(){
    cout << "main() was here";
    return 0;
}