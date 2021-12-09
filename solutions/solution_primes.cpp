#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int lower=1;
    int upper=100;
    int sum=0,
    noprime=0;
    /*
    cout << "\n\n Find all prime numbers:\n";
	cout << "--------------------------------------\n";
	cout << " Low: ";
	cin>> lower;
	cout << " High: ";
	cin>> upper;		
    */
	cout << "\n The primes between " << lower << " and " << upper << " are:" << endl;

    for(int i=lower; i<=upper; i++)
       {
           // Try to divide i by each number in the range
           //    we can skip 1; if we've hit i^2 we're done
           for(int j=2; j<=sqrt(i); j++)
               {
               // even numbers aren't prime, so increment a "no prime" flag
               if(i % j == 0)
                  noprime++;
               }
               // if the flag is never thrown, we have a prime 
               if(noprime == 0 && i != 1)
               { sum++;
                 cout << i << " ";
                 noprime = 0;
               }
               noprime = 0;
       }
 cout<<"\n\n The total number of prime numbers between " 
        << lower << " to " << upper << " is: " << sum << endl;
 
 return 1;
}