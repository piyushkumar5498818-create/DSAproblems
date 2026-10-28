# 🎨 Master Guide to Pattern Printing in C++

A comprehensive handbook and reference library covering every classic and advanced pattern required for CS101, DSA Midterms, and Technical Interviews.

---

## 📑 Table of Contents

- [The Universal 3-Step Mental Model](#-the-universal-3-step-mental-model)
- [The 10-Second Linear Formula Secret](#-the-10-second-linear-formula-secret)
- [Pattern Categories & Files in this Directory](#-pattern-categories--files-in-this-directory)
- [Complete Master Formula Cheat Sheet](#-complete-master-formula-cheat-sheet)
- [The 4 Core Architectural Templates](#-the-4-core-architectural-templates)
  - [1. The 3-Car Train (Pyramid / Wing)](#1-the-3-car-train-pyramid--wing)
  - [2. The Coordinate Grid Method (X, +, Swastik)](#2-the-coordinate-grid-method-x--swastik)
  - [3. The Boundary Condition (Hollow Shapes)](#3-the-boundary-condition-hollow-shapes)
  - [4. The Ceiling-Scan Method (Vertical Histograms)](#4-the-ceiling-scan-method-vertical-histograms)
- [Compilation & Running](#-compilation--running)

---

## 🧠 The Universal 3-Step Mental Model

Every pattern on a computer screen is printed **line by line (row by row)** from top to bottom, left to right. You can never jump backwards or print column-first.

Therefore, for any row $i$:
1. **Outer Loop**: Controls the row index $i$ ($1 \to N$ or $N \to 1$).
2. **First Inner Loop**: Prints leading spaces to push characters into position.
3. **Second Inner Loop**: Prints stars, numbers, or characters.
4. **Third Inner Loop (if symmetric)**: Prints the descending or mirrored half.
5. **Newline**: `cout << "\n";` to start the next row.

```
       *          <-- Leading Spaces (N-i), then Stars
     * * *
   * * * * *
 * * * * * * *
```

---

## ⚡ The 10-Second Linear Formula Secret

When facing an unfamiliar pattern on an exam, never guess. Write out a table for the first 3 rows ($i = 1, 2, 3$) and apply basic linear algebra:

$$\text{Count} = (\text{Rate of Change}) \times i + \text{Initial Offset}$$

* **If spaces decrease by 1 each row**: Slope is $-1$. At $i = 1$, spaces $= N - 1$.
  $$\text{Formula: } N - i$$
* **If stars increase by 2 each row**: Slope is $+2$. At $i = 1$, stars $= 1$.
  $$\text{Formula: } 2i - 1 \quad (1, 3, 5, 7, \dots)$$
* **If middle gap spaces decrease by 2 each row** (Butterfly wings):
  $$\text{Formula: } 2(N - i)$$

---

## 📂 Pattern Categories & Files in this Directory

| File | Category | Patterns Included |
| :--- | :--- | :--- |
| [`01_basic_triangles.cpp`](./01_basic_triangles.cpp) | **Basic Triangles** | Right-Angled, Inverted, Right-Aligned (Mirrored), Inverted Right-Aligned |
| [`02_pyramids_and_diamonds.cpp`](./02_pyramids_and_diamonds.cpp) | **Pyramids & Diamonds** | Standard Full Pyramid, Inverted Pyramid, Full Diamond, Spaced Barfi |
| [`03_hourglass_patterns.cpp`](./03_hourglass_patterns.cpp) | **Hourglass Variants** | Solid Star Hourglass, Spaced Star Hourglass, Hollow Hourglass, Palindromic Number Hourglass |
| [`04_number_and_character_patterns.cpp`](./04_number_and_character_patterns.cpp) | **Numbers & Chars** | Number Triangle, Inverted Numbers, Floyd's Triangle, 0-1 Binary Alternating, Palindromic Number Pyramid, Alphabet Triangles |
| [`05_hollow_and_wings.cpp`](./05_hollow_and_wings.cpp) | **Hollow & Wings** | Hollow Square, Hollow Rectangle, Hollow Right Triangle, Hollow Pyramid, Solid Butterfly, Hollow Butterfly |
| [`06_coordinate_and_advanced.cpp`](./06_coordinate_and_advanced.cpp) | **Grid & Advanced** | Diagonal 'X', Center Plus, Swastik Pattern, Vertical Histogram (Bar Graph) |

---

## 📊 Complete Master Formula Cheat Sheet

| Pattern | Outer Loop | Leading Spaces | Element Count / Condition | Key Trick |
| :--- | :--- | :---: | :---: | :--- |
| **Right Triangle** | $i: 1 \to N$ | $0$ | $i$ stars | Simple single inner loop |
| **Inverted Triangle** | $i: N \to 1$ | $0$ | $i$ stars | Count outer loop backwards |
| **Right-Aligned Triangle** | $i: 1 \to N$ | $N - i$ | $i$ stars | Leading spaces push right |
| **Full Pyramid** | $i: 1 \to N$ | $N - i$ | $2i - 1$ stars | Odd star formula |
| **Inverted Pyramid** | $i: N \to 1$ | $N - i$ | $2i - 1$ stars | Outer loop counts down |
| **Diamond** | Up ($1 \to N$) + Down ($N-1 \to 1$) | $N - i$ | $2i - 1$ stars | Glue pyramid + inverted |
| **Hourglass** | Down ($N \to 1$) + Up ($2 \to N$) | $N - i$ | $2i - 1$ stars | **Start lower half at $i = 2$!** |
| **Palindromic Numbers** | $i: 1 \to N$ | $N - i$ | Up: $1 \to i$, Down: $i-1 \to 1$ | 3-car train structure |
| **Floyd's Triangle** | $i: 1 \to N$ | $0$ | $j \le i$, print `count++` | Single global counter |
| **0-1 Alternating** | $i: 1 \to N$ | $0$ | `(i + j) % 2 == 0 ? 1 : 0` | Parity of index sum |
| **Butterfly Wings** | Up ($1 \to N$) + Down ($N-1 \to 1$) | Gap: $2(N - i)$ | Left: $i$, Right: $i$ | Gap is in the middle |
| **Hollow Shape** | Rows $i$, Cols $j$ | — | `i==1 \|\| i==R \|\| j==1 \|\| j==C` | Asterisk on boundary only |
| **Diagonal 'X'** | $i: 1 \to N$, $j: 1 \to N$ | — | `i == j \|\| i + j == N + 1` | Primary + secondary diagonal |
| **Swastik** | $i: 1 \to N$, $j: 1 \to N$ | — | `mid = N/2+1`, Center cross + 4 hooks | 5 distinct quadrant cases |
| **Vertical Histogram** | $ht: mx \to 1$ (downward) | — | `arr[col] >= ht ? "*" : " "` | Floor-by-floor ceiling scan |

---

## 🛠️ The 4 Core Architectural Templates

### 1. The 3-Car Train (Pyramid / Wing)
Used when a row has spaces, followed by an ascending block, followed by a descending block.
```cpp
for (int i = 1; i <= n; i++) {
    for (int sp = 1; sp <= n - i; sp++) cout << " ";  // Car 1: Spaces
    for (int j = 1; j <= i; j++) cout << j;           // Car 2: Ascent
    for (int j = i - 1; j >= 1; j--) cout << j;       // Car 3: Descent
    cout << "\n";
}
```

### 2. The Coordinate Grid Method (X, +, Swastik)
Used when the pattern depends on mathematical coordinates in an $N \times N$ matrix.
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        if (i == j || i + j == n + 1) cout << "* ";
        else cout << "  ";
    }
    cout << "\n";
}
```

### 3. The Boundary Condition (Hollow Shapes)
To make any solid shape hollow, replace `cout << "*"` with:
```cpp
if (isOnBoundary(i, j)) cout << "*";
else cout << " ";
```

### 4. The Ceiling-Scan Method (Vertical Histograms)
When array values grow upwards from the ground:
```cpp
int mx = *max_element(arr, arr + n);
for (int ht = mx; ht >= 1; ht--) { // Lower scanner from ceiling to floor
    for (int col = 0; col < n; col++) {
        if (arr[col] >= ht) cout << "*\t";
        else cout << " \t";
    }
    cout << "\n";
}
```

---

## 🚀 Compilation & Running

Compile any pattern module using `g++` with C++17:

```bash
g++ -std=c++17 -Wall 01_basic_triangles.cpp -o 01_basic_triangles && ./01_basic_triangles
g++ -std=c++17 -Wall 02_pyramids_and_diamonds.cpp -o 02_pyramids_and_diamonds && ./02_pyramids_and_diamonds
g++ -std=c++17 -Wall 03_hourglass_patterns.cpp -o 03_hourglass_patterns && ./03_hourglass_patterns
g++ -std=c++17 -Wall 04_number_and_character_patterns.cpp -o 04_number_and_character_patterns && ./04_number_and_character_patterns
g++ -std=c++17 -Wall 05_hollow_and_wings.cpp -o 05_hollow_and_wings && ./05_hollow_and_wings
g++ -std=c++17 -Wall 06_coordinate_and_advanced.cpp -o 06_coordinate_and_advanced && ./06_coordinate_and_advanced
```
