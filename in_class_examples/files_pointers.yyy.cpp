#include<iostream>
#include<fstream>
using namespace std;

int main() {
   fstream fp;
   char buf[100];
   int pos;

   // open a file in write mode with 'ate' flag
   //fp.open("random.txt", ios :: out | ios :: ate);
   fp.open("./random.txt", ios :: out | ios::in |ios::ate|ios::binary);

   cout << "\nWriting to a file ... " << endl;
   fp << "This is a line" << endl; // write a line to a file
   fp << "This is a another line" << endl; // write another file
   cout << "put: " << fp.tellp() << " get: " << fp.tellg() << endl;
   
   // move the pointer 10 bytes backward from current position 
   fp.seekp(-10, ios :: cur);
   fp << endl << "Writing at a random location  ";
   cout << "put: " << fp.tellp() << " get: " << fp.tellg() << endl;

   // move the pointer 7 bytes forward from beginning of the file
   fp.seekp(7, ios :: beg);
   fp << " Hello World  ";
   cout << "put: " << fp.tellp() << " get: " << fp.tellg() << endl;
   fp.close();

   cout << "Writing Complete ... " << endl;

   // open a file in read mode with 'ate' flag
   fp.open("random.txt", ios :: in | ios :: ate);
   cout << "\nReading from the file ... " << endl;
   fp.seekg(0); // move the get pointer to the beginning of the file
   cout << "put: " << fp.tellp() << " get: " << fp.tellg() << endl;
   
   // read all contents till the end of file
   while (!fp.eof()) {
      fp.getline(buf, 100);
      cout << buf << endl;
   }
   
   cout << "put: " << fp.tellp() << " get: " << fp.tellg() << endl;
   pos = fp.tellg();
   
   return 0;
}