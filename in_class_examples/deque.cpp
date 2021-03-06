

#include <iostream>
#include <cassert>
#include <deque>
#include <algorithm>  //methods like find() operate on ranges of element
#include <string>

using namespace std;

void deque_create(){

    // create from array
    int x[5] = {1, 2, 3, 4, 5};
    // Syntax:  deque<data_type> name(start_address, end_address)
    deque<int> deque1(&x[0], &x[5]);
}

void deque_methods(){

    int x[5] = {1, 4, 8, 10, 12};   // create an array
    deque<int> deque1(&x[0], &x[5]);  // assign syntax:   (first address, last address)

    // locate index position of an object (fail)
    int find_this = 3;   // there's no 3!
    deque<int>::iterator pos = find(deque1.begin(), 
                                deque1.end(), 
                                find_this);
    
    cout << "Looking for " << find_this << " located: " << *pos << endl;

    // success
    int find_this1 = 12;
    deque<int>::iterator pos1 = find(deque1.begin(), 
                                    deque1.end(), 
                                    find_this1);

    cout << "Looking for " << find_this1 << " located: " << *pos1 << endl;

    // create the queue directly:
    deque<int> y = {201, 202, 203, 204, 205};
    for (int i=0; i<y.size(); i++)
        cout<<y[i] << "\t";
    cout << endl;

    // replace some elements with values from x using an iterator
    deque<int>::iterator deque1_iter;
    deque1_iter = deque1.begin() + 1;
    y.assign(deque1_iter, deque1.end() - 1);
    for (int i=0; i<y.size(); i++)
        cout<<y[i] << "\t";
    cout << endl;

}

void dq_add_front_back(){
    // create via assign;  print w/ ostream_iterator()
    deque<string> dqs;
    dqs.assign (1, "^^^");   // insert one of these ^^^ things
    dqs.push_back("back");
    dqs.push_front("front");

    copy (dqs.begin(), 
          dqs.end(),
          ostream_iterator<string>(cout, "\t")
          );
    cout << endl;

    dqs.push_back("back1");
    dqs.push_front("front1");
    copy (dqs.begin(), dqs.end(), ostream_iterator<string>(cout, "\t")); cout << endl;

    dqs.push_back("back2");
    dqs.push_front("front2");

    cout << "After loading all elements:\n";
    copy (dqs.begin(), dqs.end(), ostream_iterator<string>(cout, "\t")); cout << endl;

    for (int i=0; i<dqs.size()-1 ; i++){
        cout << "\nRemoving from back: \n";
        dqs.pop_back();
        copy (dqs.begin(), dqs.end(), ostream_iterator<string>(cout, "\t")); cout << endl;
    }

    cout << "\n********\n";
    cout << "\nRemoving from front:  \n";
    for (int i=0; i<dqs.size()+1 ; i++){
        dqs.pop_front();
        copy (dqs.begin(), dqs.end(), 
        ostream_iterator<string>(cout, "\t")); 
        cout << endl;

    }

}

int main(){
    deque_create();
    deque_methods();
    dq_add_front_back();
}