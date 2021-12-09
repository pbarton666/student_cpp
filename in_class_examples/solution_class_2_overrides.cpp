#include <iostream>
#include <string>

using namespace std;

// Inheritance 

class MammalClass{
    // class attributes are private by default. 'mangled' versions are used here
    protected:
        bool warm_blooded_ = true;  // arctic ground squirrle is heterothermic
        bool live_young_ = true;    // platypus lays eggs

    public:
        // we may want to reserve exceptions for these traits; return mangled values
        bool warm_blooded() const {return warm_blooded_;}
        bool live_young() const {return live_young_;}
        // this variable is defined as a constant and can't be changed
        const bool have_hair = true;
};

class DogClass: public MammalClass{
    public:
        const int leg_count = 4;   // all dogs will have 4 legs
        int loyalty_score_ = 10;   // assumed loyalty is 10, but could change 
        string dog_name_;     // dogs will get names, but we don't know what they are yet

        void setName(string name){ dog_name_ = name; }
        string dog_name() const {return dog_name_;}
        void setLoyaltyScore(int loyalty){ loyalty_score_ = loyalty; }
        int loyalty_score() const {return loyalty_score_;}

        string reportFood(){
            cout << "Mail carriers are the tastiest for a Dog." << endl;
    }

    };

class HuskyClass: public DogClass{
    public:
        bool sings_blues = true;
        string color = "white";
        void reportFood(){
            cout << "We Huskies believe caribu steaks rock." << endl;
        }
    
};

class SiberianHuskyClass: public HuskyClass{
    public:
        string color = "brown";
        void reportColor(){
            cout << "I'm "  << color << endl;
        }
};

int main(){

    // public constructors are available
    SiberianHuskyClass siberian;
    siberian.setName("Nanook");
    siberian.reportFood();
    siberian.reportColor();
    siberian.setLoyaltyScore(9);
    cout << siberian.dog_name() << " has a loyalty score of: " << siberian.loyalty_score() << endl;

    return 0;
}