#include <iostream>
#include <string>

using namespace std;

// Overloaded functions
int multiply ( int x, int y )
{
    return (x * y);
}

double multiply ( double x, double y )
{
    return (x * y);
}


// Generic template (we promise to provide the type of the var when we call)
template<class Type>   // defined using generic Type
Type mul ( Type x, Type y )
{
    return (x * y);
}


int main(){
    // Correct multiply() inferred from input types
    int x=3;
    int z=5;
    int ans = multiply(x, z);
    cout << ans << endl;
    
    cout << "******" << endl;
    int ans_mul_int = mul<int>(x, z);
    cout << ans_mul_int << endl;

    // Template data type can be forced
    cout << "******" << endl;
    float a = 3.1;
    float b = 5.2;
    float ans_mul_float = mul<float>(a, b);   // concrete type @ instansiation time
    cout << ans_mul_float << endl;

   // Template data type can be inferred
    cout << "******" << endl;
    float c = 3.1;
    float d = 5.2;
    float ans_mul_float = mul(c, d);       // concrete type inferred @ instantiation time
    cout << ans_mul_float << endl;


}