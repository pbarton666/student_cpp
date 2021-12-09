#include <iostream>
#include <string>

// Here's a custom function 
int addInts(int arg1, int arg2) 
{
        int sum = arg1 + arg2;
        std::cout <<  "sum from addInts() is: " + std::to_string(sum) << std::endl; 
        return sum;  // not needed if return type is void
}

int main(){
    
    int a{2};
    int b{3};

    // calculate a result from our function
    int result = addInts(a, b);
    std::cout << "result from main: " + std::to_string(result) << std::endl;
    
    // create a local (to main) version of 'sum'; namespace isolation retained.
    int sum {666};
    std::cout << "sum from main: " + std::to_string(sum) << std::endl;

    // it's important to keep track of variable types in caller and destination
    float c{2.9};
    float d{3.9};
    float result1=addInts(c, d);    // returns integer 5
    
}



