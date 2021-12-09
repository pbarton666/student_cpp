#include <iostream>
#include <string>

// recursion

int factorial(int n)
    /* <0 are imaginary numbers (we won't go there)
    0! = 0 (definition)
    1! = 1 
    2! = 2 * 1
    3! = 3 * 2 * 1
    ... 
    */
    {
        if(n == 1 || n == 0)
        {
            // end of recurstion
            std::cout << "end of recursion with n=" + std::to_string(n) << std::endl;
            
            return 1;
        }
        else
        {
            // self-referential call with decremented value
            std::cout << "self-referential call with n=" + std::to_string(n) << std::endl;
            return n*factorial(n-1);
        }
    }

int main(){

    int x = 5;
    factorial(x);
    

}