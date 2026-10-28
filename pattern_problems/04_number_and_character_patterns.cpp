#include <iostream>
using namespace std;

// ==========================================
// 1. SIMPLE NUMBER TRIANGLE
// ==========================================
// 1
// 1 2
// 1 2 3
// 1 2 3 4
void numberTriangle(int n) {
    cout << "--- 1. Number Triangle (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 2. INVERTED NUMBER TRIANGLE
// ==========================================
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void invertedNumberTriangle(int n) {
    cout << "--- 2. Inverted Number Triangle (N = " << n << ") ---\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 3. FLOYD'S TRIANGLE (CONSECUTIVE INTEGERS)
// ==========================================
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// Technique: Global counter variable incremented continuously
void floydsTriangle(int n) {
    cout << "--- 3. Floyd's Triangle (N = " << n << ") ---\n";
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << "\t";
            num++;
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 4. 0-1 BINARY ALTERNATING TRIANGLE
// ==========================================
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// Formula: Sum of coordinates (i + j) is even -> 1, odd -> 0
void binaryTriangle(int n) {
    cout << "--- 4. 0-1 Binary Alternating Triangle (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) cout << "1 ";
            else cout << "0 ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 5. PALINDROMIC NUMBER PYRAMID
// ==========================================
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
// Technique: 3-Car Train -> Leading Spaces + Ascent (1 to i) + Descent (i-1 down to 1)
void palindromicPyramid(int n) {
    cout << "--- 5. Palindromic Number Pyramid (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << j << " ";
        for (int j = i - 1; j >= 1; j--) cout << j << " ";
        cout << "\n";
    }
    cout << "\n";
}

// ==========================================
// 6. ALPHABET TRIANGLES (ROW & COLUMN BASED)
// ==========================================
// Triangle A: (Column-wise)
// A
// A B
// A B C
// Triangle B: (Row-wise)
// A
// B B
// C C C
void alphabetTriangles(int n) {
    cout << "--- 6A. Column-wise Alphabet Triangle (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1) << " ";
        }
        cout << "\n";
    }
    cout << "\n--- 6B. Row-wise Alphabet Triangle (N = " << n << ") ---\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + i - 1) << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    int n = 4;
    numberTriangle(n);
    invertedNumberTriangle(n);
    floydsTriangle(n);
    binaryTriangle(n);
    palindromicPyramid(n);
    alphabetTriangles(n);
    return 0;
}
