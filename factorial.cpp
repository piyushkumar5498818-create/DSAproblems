#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int fact(int N); // Function prototype before main()

int fact_recursive(int N) {
    if (N <= 1) return 1; // Base case
    return N * fact_recursive(N - 1); // Recursive step
}

int main() {
    int g; cin >> g;
    cout << "Iterative: " << fact(g) << endl;
    cout << "Recursive: " << fact_recursive(g) << endl;
    return 0;
}

int fact(int N) {
    int f = 1;
    for (int i = N; i > 1; i--) {
        f = f * i;
    }
    return f;
}