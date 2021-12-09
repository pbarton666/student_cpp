#include <iostream>
#include <fstream>
#include <string>

// explicit short-hand access to libraries
using std::cout;
using std::endl;
using std::cin;
using std::ofstream;
using std::ifstream;
using std::fstream;
using std::string;

class DogClass{
    public:
        const int leg_count = 4;   // all dogs will have 4 legs
        int loyalty_score_ = 10;   // assumed loyalty is 10, but could change 
        std::string dog_name_;     // dogs will get names, but we don't know what they are yet

        void setName(std::string name){ dog_name_ = name; }
        std::string dog_name() const {return dog_name_;}
        void setLoyaltyScore(int loyalty){ loyalty_score_ = loyalty; }
        int loyalty_score() const {return loyalty_score_;}
    };

int main(){
    // Build a file with real binary objects 
    string fn = "doghouse.dat";
    string line;
    
    // Make a dog
    DogClass my_husky;
    my_husky.setName("Quinn");

    // Open a file to hold him.   A binary file, force creation
    ofstream myfile_w(fn, ofstream::binary | ofstream::trunc);
    if (myfile_w.is_open()){
        myfile_w.write(  (char *) &my_husky, sizeof(DogClass));
        myfile_w.close();
    }

    // Reopen the file in read mode and rescue him
    ifstream myfile_r(fn, ifstream::binary);
    DogClass recovered_husky;

    if (myfile_r.is_open()){
        DogClass d;
        if (myfile_r.read(  (char * )&recovered_husky, sizeof(DogClass) ) ) {
            cout << recovered_husky.dog_name() << endl;
        }
        myfile_r.close();
    }
}