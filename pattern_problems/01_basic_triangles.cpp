#include <iostream>
using namespace std;

// ==========================================
// 1. RIGHT-ANGLED TRIANGLE
// ==========================================
// *
// * *
// * * *
// * * * *
// Formula: Row i (1 to n) -> Stars = i
void rightAngledTriangle(int n) {
    cout << "--- 1. Right-Angled Triangle (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 2. INVERTED RIGHT-ANGLED TRIANGLE
// ==========================================
// * * * *
// * * *
// * *
// *
// Formula: Row i (n down to 1) -> Stars = i
void invertedTriangle(int n) {
    cout << "--- 2. Inverted Right-Angled Triangle (N = " << n << ") ---\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 3. RIGHT-ALIGNED (MIRRORED) TRIANGLE
// ==========================================
//       *
//     * *
//   * * *
// * * * *
// Formula: Row i (1 to n) -> Spaces = n - i, Stars = i
void rightAlignedTriangle(int n) {
    cout << "--- 3. Right-Aligned Triangle (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        // Leading double-spaces to match "* " width
        for (int sp = 1; sp <= n - i; sp++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 4. INVERTED RIGHT-ALIGNED TRIANGLE
// ==========================================
// * * * *
//   * * *
//     * *
//       *
// Formula: Row i (n down to 1) -> Spaces = n - i, Stars = i
void invertedRightAlignedTriangle(int n) {
    cout << "--- 4. Inverted Right-Aligned Triangle (N = " << n << ") ---\n";
    for (int i = n; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    int n = 4;
    rightAngledTriangle(n);
    invertedTriangle(n);
    rightAlignedTriangle(n);
    invertedRightAlignedTriangle(n);
    return 0;
}
