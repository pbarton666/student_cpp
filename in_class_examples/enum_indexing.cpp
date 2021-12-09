#include <iostream>
#include <string>
#include <chrono>

//https://www.delftstack.com/howto/cpp/how-to-convert-enum-to-string-cpp/
using std::cout; using std::cin;
using std::endl; using std::string;

enum Fruit { Banana, Coconut, Mango, Carambola, Total } ;
static const char *enum_str[] =
        { "Banana Pie", "Coconut Tart", "Mango Cookie", "Carambola Crumble" };

int main(){
    std::srand(std::time(nullptr));
    int random = rand() % Total;
    auto input = static_cast<Fruit>(random);

    switch (input) {
        case Banana: cout << enum_str[Banana] << endl; break;
        case Coconut: cout << enum_str[Coconut] << endl; break;
        case Mango: cout << enum_str[Mango] << endl; break;
        case Carambola: cout << enum_str[Carambola] << endl; break;
        case Total: cout << "Incorrect ingredient!" << endl; break;
    }

    return EXIT_SUCCESS;
}




// Switch also works on an enum type
enum Animal {Cat, Dog, Wolf};
Animal critter { Cat };

switch (critter) {
    case Cat:
        std::cout << "Cat says 'derp'"  << std::endl;
        break;
     case Dog:
        std::cout << "Dog says 'WOOF!'"  << std::endl;
        break;
     case Wolf:
        std::cout << "Wolf says Awwwwwoooo'"  << std::endl;
        break;

   default:
        std::cout << "Sorry, we don't know your critter."  << std::endl;
        break;
}

}