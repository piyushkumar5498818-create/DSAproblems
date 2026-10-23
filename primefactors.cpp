#include <iostream>
using namespace std;

// Time Complexity: O(sqrt(n))
int main() {
    int n; cin >> n;
    cout << "Prime factors of " << n << ": ";
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) {
        cout << n << " "; // Remaining prime factor
    }
    cout << endl;
    return 0;
}