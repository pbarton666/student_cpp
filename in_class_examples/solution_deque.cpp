#include <iostream>
#include <deque>

using namespace std;

int main ()
{
    deque<int> first = {201, 202, 203, 204, 205};
    deque<int> second;
    deque<int> third;

    deque<int>::iterator it;
    it = first.begin() + 1;

    second.assign (it, first.end() -1 ); // the middle 3 elements of the first

    int myints[] = {2000, 2, 29};
    third.assign (myints, myints + 3);   // assigning from array.

    
    for(const auto& element: first) {
        std::cout << element << "\t";
        }
        cout << endl << "Size of first: " << int (first.size()) << endl << endl;

    for(const auto& element: second) {
        std::cout << element << "\t";
        }
        cout << endl << "Size of second " << int (second.size()) << endl << endl;

    for(const auto& element: third) {
        std::cout << element << "\t";
        }
        cout << endl << "Size of third: " << int (third.size()) << endl;






  return 0;
}