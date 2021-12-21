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

// Read and write a file by moving file pointers

void printFileInfo(fstream &fh){
    cout << "get position:  " << fh.tellg() << "   put position:  " << fh.tellp() << endl;
}

int exploreFile(){
    // Build a file with both input and output
    string fn = "junk1.dat";
    string line;
    
    // use fstream flags;   trunc writes a file (even nonexistent)
    fstream myfile(fn, fstream::binary | fstream::in | fstream::out | fstream::trunc);
    if (myfile.is_open()){

        printFileInfo(myfile);

        // Write a few lines.   Fp positions move. 
        cout << "\nWriting lines\n";
        myfile << "first line\nsecond line\nthird line\n";
        
        cout << "****************************" << endl;
        printFileInfo(myfile);

        cout << "\nResetting file pointer...\n";
        myfile.seekg(0);
        printFileInfo(myfile);
        myfile.seekp(5);
        printFileInfo(myfile);
        cout << "\nReading file contents:\n";
        while (getline (myfile, line)) {    
                cout << line << '\n';
            }

        cout << "\nResetting file pointer...\n";
        myfile.seekp(0);
        cout << "\nGIBBIRISH\n";
        while (getline (myfile, line)) {    
                cout << line << '\n';
            }
 
    
        myfile.close();
    }
    else cout << "File failed to open!";


    return 0;
}

int main(){
    exploreFile();
}