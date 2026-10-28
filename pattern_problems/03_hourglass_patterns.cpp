#include <iostream>
using namespace std;

// ==========================================
// 1. SOLID STAR HOURGLASS
// ==========================================
// * * * * * * *
//   * * * * *
//     * * *
//       *
//     * * *
//   * * * * *
// * * * * * * *
// Formula: Inverted Pyramid (n down to 1) + Upright Pyramid (2 up to n)
// CRITICAL EXAM TRAP: The lower half MUST start at i = 2 to avoid duplicating the neck star!
void solidHourglass(int n) {
    cout << "--- 1. Solid Star Hourglass (N = " << n << ") ---\n";
    // Upper Half (n down to 1)
    for (int i = n; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }
    // Lower Half (2 up to n)
    for (int i = 2; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 2. SPACED STAR HOURGLASS (BARFI STYLE: "* ")
// ==========================================
// * * * *
//  * * *
//   * *
//    *
//   * *
//  * * *
// * * * *
void spacedHourglass(int n) {
    cout << "--- 2. Spaced Star Hourglass (N = " << n << ") ---\n";
    // Upper Half
    for (int i = n; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
    // Lower Half
    for (int i = 2; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 3. HOLLOW HOURGLASS
// ==========================================
// * * * * * * *
//   *       *
//     *   *
//       *
//     *   *
//   *       *
// * * * * * * *
// Condition: Print '*' if on horizontal flat borders (i == n) or side edges (j == 1 || j == 2*i - 1)
void hollowHourglass(int n) {
    cout << "--- 3. Hollow Hourglass (N = " << n << ") ---\n";
    // Upper Half
    for (int i = n; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i == n || j == 1 || j == 2 * i - 1) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    // Lower Half
    for (int i = 2; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i == n || j == 1 || j == 2 * i - 1) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 4. PALINDROMIC NUMBER HOURGLASS
// ==========================================
// 1 2 3 4 3 2 1
//   1 2 3 2 1
//     1 2 1
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
void palindromicNumberHourglass(int n) {
    cout << "--- 4. Palindromic Number Hourglass (N = " << n << ") ---\n";
    // Upper Half
    for (int i = n; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << j << " ";
        for (int j = i - 1; j >= 1; j--) cout << j << " ";
        cout << "\n";
    }
    // Lower Half
    for (int i = 2; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << j << " ";
        for (int j = i - 1; j >= 1; j--) cout << j << " ";
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    int n = 4;
    solidHourglass(n);
    spacedHourglass(n);
    hollowHourglass(n);
    palindromicNumberHourglass(n);
    return 0;
}
