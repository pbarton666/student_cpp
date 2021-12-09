#include <iostream>

int main()
{
// single and multiple declarations (single is better)
int dog;
int cat, zebra;

// declaration + assignment

// copy initialization (a little more liberal, truncates floats, no warning)
int camel = 6;
//int camel = 6.3;   

// direct initialization (often more efficient)
int mule ( 777 );

// direct brace initialization (recommended - a little more picky)
int horse { 888 };

// copy brace initialization   (truncates floats but warnings!)
int sheep = { 888 }; 
//int sheep = { 888.4 }; 

// value initialization as a placeholder - typically to 0
int goat = {};

// multi-line copy, direct, brace initialization
int a = 5, b = 6; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e { 9 }, f { 10 }; // brace initialization (preferred) 

// epic fail
int m, n = 3;    // m never initialized 

  std::cout << camel <<std::endl;
  std::cout << sheep;
  std::cin.sync();
  std::cin.get();




}