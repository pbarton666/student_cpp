#include<iostream>
using namespace std;

// Common grandparent of Mule. Note overloaded constructors.
class Equine {
public:
    Equine(int x)  { cout << "Equine called" << endl;   }
    Equine() { cout << "Equine default constructor called" << endl;}
};

// Parents of Mule  
//class Horse :  public Equine {
class Horse :  virtual public Equine {
public:
    Horse(int x):Equine(x)   {
       cout<<"Horse called"<< endl;
    }
};
  
//class Donkey :  public Equine {
class Donkey : virtual public Equine {
public:
    Donkey(int x) : Equine(x) {
        cout<<"Donkey called"<< endl;
    }
};
  
class Mule : public Horse, public Donkey {
    public:
        Mule(int x): Horse(x), Donkey(x){
            cout << "Mule called" << endl;
        }
};

int main() {
    Mule beryl_the_mule(7);
}