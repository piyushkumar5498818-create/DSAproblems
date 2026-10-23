#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int testCases; 
    cin >> testCases;
    for (int t = 0; t < testCases; t++) {
        int a; 
        cin >> a;
        int arr[a];
        int m = INT_MIN;
        for (int j = 0; j < a; j++) {
            cin >> arr[j];
            m = max(m, arr[j]);
        }
        cout << m << endl;
    }
    return 0;
}
