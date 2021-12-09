#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
    string name;
    int weight;
    string toy;

public:
    // getters
    string getName()  const { return name;   } 
    int   getWeight()  const  { return weight; }
    string getToy()  const  { return toy; }

    // setters
    void  setName(string dogname) { name = dogname; }
    void  setWeight(int dogweight) { weight = dogweight; }
    void  setToy(string dogtoy)  { toy = dogtoy; }
        
    // constructor
    Dog(
        string dogname,
        int dogweight,
        string dogtoy
        ):
        name(dogname), weight(dogweight), toy(dogtoy) {}

};

int main(){
    // make an instance of dog
    Dog quinn("Quinn", 123, "sock");
    
    cout << quinn.getName() << endl;
    cout << quinn.getWeight() << endl;
    cout << quinn.getToy() << endl;
    cout << "****" << endl;

    quinn.setName("Quinn1");
    quinn.setWeight(12345);
    quinn.setToy("Squaky Squirrel");
    
    cout << quinn.getName() << endl;
    cout << quinn.getWeight() << endl;
    cout << quinn.getToy() << endl;
    
    return 0;
}