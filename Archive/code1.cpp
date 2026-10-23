#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int rows;cin>>rows;



    // Loop through each row from total rows down to 1
    for (int i = rows; i >= 1; i--) {
        
        // 1. Print leading spaces to push the stars into a pyramid shape
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // 2. Print the odd number of stars (2 * i - 1)
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }
    return 0;
}