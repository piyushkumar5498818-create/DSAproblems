#include <iostream>
#include <vector>
using namespace std;

// Sieve of Eratosthenes: Finds all prime numbers up to N
// Time Complexity: O(N * log(log N))
// Space Complexity: O(N)
void sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            // Mark multiples of p as non-prime starting from p*p
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    cout << "Primes up to " << n << ":\n";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter upper limit N: ";
    cin >> n;
    sieve(n);
    return 0;
}
