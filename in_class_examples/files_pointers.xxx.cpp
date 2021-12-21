#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// explicit short-hand access to libraries
using namespace std;

int data1_arr[3] = {1, 2, 3};
int data2_int = 1;
vector<int> data3_vector = {100, 200, 300, 400};

// boilerplate - templated collection
template<class Type>
Type report ( Type x )
{
    cout << endl;
    for (int i=0; i<x.size(); i++ ){
        cout << x[i] << "\t";
    }   
    cout << endl;
    return (x); 
}

// Read and write a file by moving file pointers

void printFileInfo(fstream &fh){
    cout << "get position:  " << fh.tellg() << "   put position:  " << fh.tellp() << endl;
}

void writeFile(string fn){
    //open write mode only
    fstream myfile(fn, fstream::binary | fstream::out );
    
    if (myfile.is_open()){

        for (int i=0; i < 3; i++)
            data1_arr[i] = i + 1;

            myfile.write((char *)data1_arr, sizeof(data1_arr));  
            myfile.write((char *)&data2_int, sizeof(data2_int));  
            myfile.write((char *)&data3_vector, sizeof(data3_vector));  
            myfile.close();
    }
    else{
        cout << "File open failed ";
    }
}


void readFile(string fn){
    //open for reading

    int out_data1_arr[3];  // = {1, 2, 3};
    int out_data2_int;  // = 1;
    vector<int> out_data3_vector;  // = {100, 200, 300, 400};    

    fstream myfile(fn, fstream::binary | fstream::in );
    
    if (myfile.is_open()){

            myfile.read((char *)out_data1_arr, sizeof(data1_arr));  
            myfile.read((char *)&out_data2_int, sizeof(data2_int));  
            myfile.read((char *)&out_data3_vector, sizeof(data3_vector));  
        
        cout << "the array (the address, really): " << out_data1_arr << endl;
        cout << "the integer: " << out_data2_int << endl;
        cout << "the vector:  ";
        report(out_data3_vector);
        myfile.close();
        }

    else{
        cout << "File open failed ";
    }
}

void readWriteFile(string fn){
    //open for reading

    int out_data1_arr[3];  // = {1, 2, 3};
    int out_data2_int;  // = 1;
    ifstream::pos_type vector_pos;
    vector<int> out_data3_vector;  // = {100, 200, 300, 400};   
    vector<int> new_vector = {-1000, -2000, -3000,-4000}; 
    //int vector_pos = -1;
    fstream myfile(fn, fstream::binary | fstream::in | fstream::out );
    
    if (myfile.is_open()){

        //find the vector
        vector_pos += sizeof(data1_arr) + sizeof(data2_int);
        myfile.seekg(vector_pos, ios::beg);
        myfile.seekp(vector_pos, ios::beg);

        //read the vector
        myfile.read((char *)&out_data3_vector, sizeof(new_vector));  
        cout << "vector read from readWriteFile" << endl;
        report(out_data3_vector);
        printFileInfo(myfile);

        cout << "get pointer returned to 0" << endl;
        myfile.seekg(0);
        printFileInfo(myfile);

        
        //add new data on old vector's slot (at the vector_pos)
        myfile.write((char *)&new_vector, sizeof(data3_vector));
        cout << "new vector written" << endl;
        report(new_vector);
        printFileInfo(myfile);

        myfile.close();
        }

    else{
        cout << "File open failed ";
    }
}

int main(){
    string dummy;
    string fn = "junk2.dat";

    // write some stuff
    writeFile(fn);

    // read and report contents
    readFile(fn);

    // read only the vector then insert new values
    readWriteFile(fn);
    readFile(fn);

    cin.get();
}