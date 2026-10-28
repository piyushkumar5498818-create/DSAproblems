#include <iostream>
using namespace std;

// ==========================================
// 1. STANDARD FULL PYRAMID
// ==========================================
//       *
//     * * *
//   * * * * *
// * * * * * * *
// Formula: Row i (1 to n) -> Spaces = n - i, Stars = 2 * i - 1
void fullPyramid(int n) {
    cout << "--- 1. Full Pyramid (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 2. INVERTED FULL PYRAMID
// ==========================================
// * * * * * * *
//   * * * * *
//     * * *
//       *
// Formula: Row i (n down to 1) -> Spaces = n - i, Stars = 2 * i - 1
void invertedPyramid(int n) {
    cout << "--- 2. Inverted Full Pyramid (N = " << n << ") ---\n";
    for (int i = n; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 3. FULL SOLID DIAMOND
// ==========================================
//       *
//     * * *
//   * * * * *
//     * * *
//       *
// Formula: Upper half (1 to n) + Lower half (n - 1 down to 1)
void fullDiamond(int n) {
    cout << "--- 3. Full Diamond (N = " << n << ") ---\n";
    // Upper Half
    for (int i = 1; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }
    // Lower Half (starts from n - 1 to avoid duplicating center row)
    for (int i = n - 1; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 4. SPACED DIAMOND / BARFI PATTERN
// ==========================================
//    *
//   * *
//  * * *
//   * *
//    *
// Formula: Spaces = n - i, Stars = i printed as "* " (single space separation)
void barfiPattern(int n) {
    cout << "--- 4. Spaced Diamond / Barfi Pattern (N = " << n << ") ---\n";
    // Upper Half
    for (int i = 1; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
    // Lower Half
    for (int i = n - 1; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    int n = 4;
    fullPyramid(n);
    invertedPyramid(n);
    fullDiamond(n);
    barfiPattern(n);
    return 0;
}
