#include <iostream>
#include <vector>
using namespace std;

// ==========================================
// 1. BASIC RECURSION (HEAD vs TAIL RECURSION)
// ==========================================

// Print 1 to N using recursion (Head recursion: print after recursive call)
void print1ToN(int n) {
    if (n == 0) return; // Base case
    print1ToN(n - 1);   // Recursive step
    cout << n << " ";   // Executed on unwinding
}

// Print N to 1 using recursion (Tail recursion: print before recursive call)
void printNTo1(int n) {
    if (n == 0) return; // Base case
    cout << n << " ";   // Executed going forward
    printNTo1(n - 1);   // Recursive step
}

// Sum of first N natural numbers
int sum1ToN(int n) {
    if (n <= 0) return 0; // Base case
    return n + sum1ToN(n - 1);
}

// Factorial of N: O(N) time, O(N) stack space
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Fibonacci number: F(0)=0, F(1)=1, F(n) = F(n-1) + F(n-2)
// Time: O(2^N), Space: O(N) call stack depth
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Sum of digits recursively: e.g. 1234 -> 4 + sumDigits(123) = 10
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

// ==========================================
// 2. POWER FUNCTION (O(N) vs FAST O(log N))
// ==========================================

// Standard power: x^n = x * x^(n-1) -> O(N)
long long powerLinear(int x, int n) {
    if (n == 0) return 1;
    return x * powerLinear(x, n - 1);
}

// Fast Power / Binary Exponentiation -> O(log N)
// x^n = (x^(n/2))^2 if n is even, x * (x^(n/2))^2 if n is odd
long long powerLog(int x, int n) {
    if (n == 0) return 1;
    long long half = powerLog(x, n / 2);
    if (n % 2 == 0) return half * half;
    else return x * half * half;
}

// ==========================================
// 3. RECURSION ON ARRAYS & STRINGS
// ==========================================

// Check if array is sorted in non-decreasing order: O(N)
bool isSorted(int arr[], int n, int idx = 0) {
    // If 0 or 1 elements left, it is sorted
    if (idx >= n - 1) return true;
    // If current element > next, not sorted
    if (arr[idx] > arr[idx + 1]) return false;
    return isSorted(arr, n, idx + 1);
}

// Recursive Linear Search: returns index or -1
int recursiveSearch(int arr[], int n, int target, int idx = 0) {
    if (idx >= n) return -1; // Target not found
    if (arr[idx] == target) return idx; // Found
    return recursiveSearch(arr, n, target, idx + 1);
}

// Recursive Palindrome check for string
bool isPalindromeRecursive(const string &s, int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return isPalindromeRecursive(s, l + 1, r - 1);
}

// ==========================================
// 4. TRACING EXAM QUESTIONS (DRY RUN DRILL)
// ==========================================
// Teachers frequently ask: "What does this output?"
void examTracingExample(int n) {
    if (n <= 0) return;
    cout << n << " ";
    examTracingExample(n - 1);
    cout << n << " ";
}
// For examTracingExample(3), output is: 3 2 1 1 2 3

int main() {
    cout << "=== RECURSION CHEAT SHEET DEMO ===\n\n";

    cout << "1. Print 1 to 5: ";
    print1ToN(5);
    cout << "\n";

    cout << "2. Print 5 to 1: ";
    printNTo1(5);
    cout << "\n";

    cout << "3. Sum of 1 to 5: " << sum1ToN(5) << "\n";
    cout << "4. Factorial of 5: " << factorial(5) << "\n";
    cout << "5. 6th Fibonacci: " << fibonacci(6) << "\n";
    cout << "6. Sum of digits of 5432: " << sumOfDigits(5432) << "\n";
    cout << "7. Power 2^10 (Fast O(log N)): " << powerLog(2, 10) << "\n";

    int testArr[] = {1, 3, 5, 8, 12};
    int sz = 5;
    cout << "8. Is array sorted? " << (isSorted(testArr, sz) ? "YES" : "NO") << "\n";
    cout << "9. Recursive search for 8: Index " << recursiveSearch(testArr, sz, 8) << "\n";

    string pal = "racecar";
    cout << "10. Is 'racecar' palindrome? " 
         << (isPalindromeRecursive(pal, 0, pal.length() - 1) ? "YES" : "NO") << "\n";

    cout << "11. Tracing Drill examTracingExample(3): ";
    examTracingExample(3);
    cout << "\n";

    return 0;
}
