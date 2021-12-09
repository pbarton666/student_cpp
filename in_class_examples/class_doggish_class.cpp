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
    
    // Make some dogs
    DogClass top_dog, middle_dog, bottom_dog;
    top_dog.setName("Top");
    middle_dog.setName("Middle");
    bottom_dog.setName("Bottom");

    // Open a file to hold them, then load it up
    ofstream myfile_w(fn, ofstream::binary | ofstream::trunc);
    if (myfile_w.is_open()){
        myfile_w.write(  (char *) &top_dog, sizeof(DogClass));
        myfile_w.write(  (char *) &middle_dog, sizeof(DogClass));
        myfile_w.write(  (char *) &bottom_dog, sizeof(DogClass));
        myfile_w.close();
    }

    // Reopen the file in read mode and rescue them
    ifstream myfile_r(fn, ifstream::binary);
    DogClass recovered_top, recovered_middle, recovered_bottom;

    if (myfile_r.is_open()){
        myfile_r.read(  (char *)&recovered_top, sizeof(DogClass) ) ;
        myfile_r.read(  (char *)&recovered_middle, sizeof(DogClass) ) ;
        myfile_r.read(  (char *)&recovered_bottom, sizeof(DogClass) ) ;

        cout << "We got these dawgs ...:" << endl;
        cout << recovered_top.dog_name() << endl;
        cout << recovered_middle.dog_name() << endl;
        cout << recovered_bottom.dog_name() << endl;
        myfile_r.close();
    }

    // We can selectively grab one dog by moving pointers
    ifstream myfile_r1(fn, ifstream::binary);
    DogClass mad_dog;
    myfile_r1.seekg(sizeof(DogClass));
    myfile_r1.read(  (char *)&mad_dog, sizeof(DogClass) ) ;

    cout << "Middle dog only is named " + mad_dog.dog_name() << endl;


}