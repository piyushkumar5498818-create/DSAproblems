#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ==========================================
// 1. THE DIAGONAL 'X' PATTERN
// ==========================================
// *       *
//   *   *
//     *
//   *   *
// *       *
// Formula: Primary diagonal (i == j) || Secondary diagonal (i + j == n + 1)
void diagonalX(int n) {
    cout << "--- 1. Diagonal 'X' Pattern (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 2. THE CENTER PLUS '+' PATTERN
// ==========================================
//     *
//     *
// * * * * *
//     *
//     *
void centerPlus(int n) {
    cout << "--- 2. Center Plus Pattern (N = " << n << ") ---\n";
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == mid || j == mid) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 3. THE SWASTIK PATTERN
// ==========================================
// *   * * * *
// *   *
// * * * * * *
//     *     *
// * * * *   *
// Formula: Center cross (i == mid || j == mid) + 4 corner quadrant hooks
void swastikPattern(int n) {
    cout << "--- 3. Swastik Pattern (N = " << n << ") ---\n";
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == mid || j == mid) cout << "* ";          // Center cross
            else if (j == 1 && i <= mid) cout << "* ";      // Top-left hook
            else if (i == 1 && j >= mid) cout << "* ";      // Top-right hook
            else if (i == n && j <= mid) cout << "* ";      // Bottom-left hook
            else if (j == n && i >= mid) cout << "* ";      // Bottom-right hook
            else cout << "  ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 4. THE VERTICAL HISTOGRAM (BAR GRAPH)
// ==========================================
// Array: {3, 1, 0, 4, 2}
// Ceiling scanner descending: for (int ht = mx; ht >= 1; ht--)
// If arr[col] >= ht -> print '*', else print ' '
void verticalHistogram(const vector<int>& arr) {
    cout << "--- 4. Vertical Histogram (Heights: ";
    for (int x : arr) cout << x << " ";
    cout << ") ---\n\n";

    int n = arr.size();
    int mx = 0;
    for (int x : arr) mx = max(mx, x);

    // 1. Lower scanner floor-by-floor from ceiling (mx) down to ground (1)
    for (int ht = mx; ht >= 1; ht--) {
        cout << "Ht " << ht << " | ";
        for (int col = 0; col < n; col++) {
            if (arr[col] >= ht) cout << "*\t";
            else cout << " \t";
        }
        cout << "\n";
    }

    // 2. Ground line
    cout << "-----+";
    for (int col = 0; col < n; col++) cout << "----\t";
    cout << "\n       ";
    for (int col = 0; col < n; col++) cout << arr[col] << "\t";
    cout << "\n\n";
}

int main() {
    int n = 5;
    diagonalX(n);
    centerPlus(n);
    swastikPattern(n);

    vector<int> heights = {3, 1, 0, 4, 2};
    verticalHistogram(heights);

    return 0;
}
