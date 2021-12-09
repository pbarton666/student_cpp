#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Create a function that takes the last row as an arg and returns a new one.
//  Both will be vector<int> data types.
vector<int> makeNextRow(vector<int> last_row) {
    
    vector<int> next_row;  // we'll return this

    // this row will be one larger than the last one
    int row_len = last_row.size() + 1;

    // this row's elements will be based on the last row's
    for( int i = 0; i < row_len ; i++ ) {
        
        // At the start and end of the row, the value is 1
        if (i==0 | i==row_len-1){
            next_row.push_back(1);
            continue;
        }
        // combine values from previous row
        next_row.push_back(last_row[i-1] + last_row[i]);
    }
    return next_row;
    }

    int main() {

    // A 2-d vector in integres holds the triangle
    vector<vector<int>> triangle;

    // The top row will be a really short vector; build from there
    vector<int> top_row {1};
    triangle.push_back(top_row);

    // Stack the rest of the vectors, one for each row
    int rows = 6;
    for( int i=0; i < rows ; i++ ) {
        triangle.push_back(makeNextRow(triangle[i]));
    }

    for( int i=0; i < triangle.size() ; i++ ) {
        for( int j=0; j < triangle[i].size() ; j++ ) {
        cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Not perfect, but better.   Spaces added at beginning of
    //  row based on 'this row versus total rows'.

    for( int i=0; i < triangle.size() ; i++ ) {         //i is rows
        cout << string( (rows-i)  , '  ');
        for( int j=0; j < triangle[i].size() ; j++ ) {  //j is cols
            cout << triangle[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    

 return 0; 
 }