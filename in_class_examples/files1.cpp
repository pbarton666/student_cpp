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
using std::flush;

int writeMary(string fn){
    // write a text file

    ofstream myfile (fn);    // establish a stream to the FS
    if (myfile.is_open())      // success?
    {
        // add content; hard-coded \n; need to closel
        myfile << "Mary had a little lamb \n";
        myfile << "little lamb \nlittle lamb\nlittle lamb\n";
        myfile << "Mary had a little lamb \n";
        myfile << "whose fleece was white as snow.";
        myfile << flush;
        myfile.close();
    }
    else cout << "Unable to open file";
    return 0;
}

int readMary(string fn){
    // read a file
    string line;

    ifstream myfile(fn);             // set up the input stream
    if (myfile.is_open()){           // everything good?

        // getline comes from an 'argument dependent lookup' std::getline from <string>
        // getline() extracts until a delimiter (default \n) then discards it.
        //     That's why we have to add it back when printing.
        while (getline (myfile, line)) {    
            cout << line << '\n';
        }
        myfile.close();
    }
    else cout << "Epic fail - can't open file.";
    return 0;
}

int main(){
    //establish a stream (connects a cpp object to a physical device)

    // types:   ofstream (output)  ifstream (input)    fstream (input or output)

    string fn = "lamb.txt";
    writeMary(fn);
    readMary(fn);
}