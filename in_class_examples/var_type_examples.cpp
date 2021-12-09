#include <iostream>
#include <string>

using namespace std;

int main(){
    int mybin;
    mybin = 0x231;
    cout << mybin <<endl;

    int myhex = 0b1111111;   //
    cout << myhex << endl;

    unsigned short int myshort = 34u;  
    const unsigned short int my_const_short = 34u;  

    const long int big_num = 12'232'123;
    cout << big_num << endl;

    const short int big_num_in_small_box =  12'232'123;                              
    cout << big_num_in_small_box << endl;

    string my_string = "now\tis\nthe time to print a quote \".";
    cout << my_string << endl;

    int bad_but_legal = 23L;
    
    char tab = '\t';
    int i, j, k = 10 ;  //terrible
    cout << i <<tab << j << tab << k; 
    


    return 0;
}