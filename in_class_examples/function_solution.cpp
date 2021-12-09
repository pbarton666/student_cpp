#include <iostream>
#include <string>

using namespace std;

bool countArgs(int, int);
int doModulus(int, int);
int doMult(int, int);
int testDoModulus(int, int, int);
int pickOperation(string, string, string);

int main(int argc, char** argv){
    if (countArgs(argc, 4)){
        int result = pickOperation(argv[1], argv[2], argv[3]);
        cout << "result is " <<  result <<endl;
    } 
}

int doModulus(int x, int y){
    return x & y;
}

int doMult(int x, int y){
    return x * y;
}

int pickOperation(string num1, string num2, string op){
    int int1 = stoi(num1);
    int int2 = stoi(num2);
    if (op == "mod"){
        return doModulus(int1, int2);
    }
    if (op == "mul"){
        return doMult(int1, int2);
    }
    cout << "I don't know what to do with the operation " << op << endl;
    exit(2);
}
    
bool countArgs(int argc, int expected){
    if(argc==expected) {
        return true;
    }
    cout << "Wrong number of args: " << argc << endl;
    exit(2);
