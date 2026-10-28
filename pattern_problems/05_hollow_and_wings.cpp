#include <iostream>
using namespace std;

// ==========================================
// 1. HOLLOW SQUARE / RECTANGLE
// ==========================================
// * * * * *
// *       *
// *       *
// * * * * *
// Condition: i == 1 || i == rows || j == 1 || j == cols
void hollowRectangle(int rows, int cols) {
    cout << "--- 1. Hollow Rectangle (" << rows << "x" << cols << ") ---\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 2. HOLLOW RIGHT TRIANGLE
// ==========================================
// *
// * *
// *   *
// * * * *
// Condition: j == 1 || j == i || i == n
void hollowRightTriangle(int n) {
    cout << "--- 2. Hollow Right Triangle (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 3. HOLLOW PYRAMID
// ==========================================
//       *
//     *   *
//   *       *
// * * * * * * *
// Condition: Inside 2*i-1 stars, star if j == 1 || j == 2*i - 1 || i == n
void hollowPyramid(int n) {
    cout << "--- 3. Hollow Pyramid (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 4. SOLID BUTTERFLY WINGS
// ==========================================
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// Formula: Left stars (i) + Gap (2*(n-i)) + Right stars (i)
void solidButterfly(int n) {
    cout << "--- 4. Solid Butterfly Pattern (N = " << n << ") ---\n";
    // Upper Half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "* ";
        for (int sp = 1; sp <= 2 * (n - i); sp++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
    // Lower Half (n-1 down to 1)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "* ";
        for (int sp = 1; sp <= 2 * (n - i); sp++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 5. HOLLOW BUTTERFLY WINGS
// ==========================================
// *             *
// * *         * *
// *   *     *   *
// *     * *     *
// *   *     *   *
// * *         * *
// *             *
void hollowButterfly(int n) {
    cout << "--- 5. Hollow Butterfly Pattern (N = " << n << ") ---\n";
    // Upper Half
    for (int i = 1; i <= n; i++) {
        // Left Wing (Hollow: j == 1 || j == i)
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "* ";
            else cout << "  ";
        }
        // Middle Gap
        for (int sp = 1; sp <= 2 * (n - i); sp++) cout << "  ";
        // Right Wing (Hollow: j == 1 || j == i)
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    // Lower Half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "* ";
            else cout << "  ";
        }
        for (int sp = 1; sp <= 2 * (n - i); sp++) cout << "  ";
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    int n = 4;
    hollowRectangle(4, 6);
    hollowRightTriangle(n);
    hollowPyramid(n);
    solidButterfly(n);
    hollowButterfly(n);
    return 0;
}
