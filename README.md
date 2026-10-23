# 📚 DSA Practice & Midterm Study Guide

A structured collection of C++ solutions, algorithm templates, and practice problems covering core foundations of Data Structures & Algorithms (Conditionals, Loops, Pattern Printing, Number Theory, 1D Arrays, and Recursion).

---

## 📑 Table of Contents

- [Quick Midterm Cheat Sheets](#-quick-midterm-cheat-sheets)
  - [1. Recursion Essentials & Call-Stack Tracing](#1-recursion-essentials--call-stack-tracing)
  - [2. 1D Array Core Patterns & Pointer Decay](#2-1d-array-core-patterns--pointer-decay)
  - [3. Number Theory & Digit Logic](#3-number-theory--digit-logic)
  - [4. Pattern Printing Formula](#4-pattern-printing-formula)
- [Repository Topic Index](#-repository-topic-index)
- [Comprehensive Midterm Notes](#-comprehensive-midterm-notes)
- [How to Compile and Run](#-how-to-compile-and-run)

---

## ⚡ Quick Midterm Cheat Sheets

### 1. Recursion Essentials & Call-Stack Tracing
Complete runnable testbed: [`recursion_mastery.cpp`](./recursion_mastery.cpp)

Every recursive solution has:
1. **Base Case**: The stop condition that returns without recursing.
2. **Recursive Step**: Shrinking the problem toward the base case ($n-1, n/2, \text{idx}+1$).
3. **Head vs. Tail Execution**:
   - Work **before** the recursive call executes top-down (going forward).
   - Work **after** the recursive call executes bottom-up (during stack unwinding).

```cpp
// Euclidean GCD: O(log(min(a, b)))
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Fast Power: O(log N)
long long power(int x, int n) {
    if (n == 0) return 1;
    long long half = power(x, n / 2);
    if (n % 2 == 0) return half * half;
    return x * half * half;
}

// Recursive Array IsSorted: O(N)
bool isSorted(int arr[], int n, int idx = 0) {
    if (idx >= n - 1) return true;
    if (arr[idx] > arr[idx + 1]) return false;
    return isSorted(arr, n, idx + 1);
}
```

---

### 2. 1D Array Core Patterns & Pointer Decay
Complete runnable testbed: [`array_mastery.cpp`](./array_mastery.cpp)

> **⚠️ Exam Alert: Pointer Decay**
> When an array `int arr[]` is passed to a function, it automatically decays into a pointer (`int*`). Inside the function, `sizeof(arr)` returns the size of a pointer (`8` bytes on 64-bit systems), **not** the size of the array. The array length must always be passed as a separate argument.

```cpp
// 1. Second Largest in a Single Pass (O(N) without sorting)
int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

// 2. Reverse Array In-Place (Two Pointers - O(N) time, O(1) space)
void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
```

---

### 3. Number Theory & Digit Logic

| Problem | Technique | Time Complexity | File |
| :--- | :--- | :--- | :--- |
| **Digit Count / Sum** | Loop `n /= 10`, extract `n % 10` | $O(\log_{10} N)$ | [`numbrofdig.cpp`](./numbrofdig.cpp), [`fivedigits.cpp`](./fivedigits.cpp) |
| **Reverse / Palindrome Number** | `rev = rev * 10 + (n % 10)` | $O(\log_{10} N)$ | [`reverse.cpp`](./reverse.cpp), [`palindromenumber.cpp`](./palindromenumber.cpp) |
| **Prime Check** | Check divisors up to $\sqrt{N}$ | $O(\sqrt{N})$ | [`prime.cpp`](./prime.cpp) |
| **Prime Factorization** | Trial division while `n % i == 0` | $O(\sqrt{N})$ | [`primefactors.cpp`](./primefactors.cpp) |
| **Sieve of Eratosthenes** | Cross out multiples starting from $p^2$ | $O(N \log \log N)$ | [`SIEVE.cpp`](./SIEVE.cpp) |
| **Euclidean GCD** | Modular reduction `gcd(b, a % b)` | $O(\log(\min(a, b)))$ | [`euclidean.cpp`](./euclidean.cpp), [`gcdrecursive.cpp`](./gcdrecursive.cpp) |

---

### 4. Pattern Printing Formula

Every pattern is solved using a consistent 3-tier nested loop structure:
```cpp
for (int i = 1; i <= N; i++) {           // 1. Row control
    for (int sp = 1; sp <= N - i; sp++) // 2. Leading spaces
        cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) // 3. Stars / Numbers
        cout << "*";
    cout << "\n";
}
```
- **Hollow Shapes**: Add condition `if (row == 1 || row == N || col == 1 || col == max_col) cout << "*"; else cout << " ";`
- **Featured Patterns in Repo**:
  - Hollow Butterfly: [`hollowbutterfly.cpp`](./hollowbutterfly.cpp)
  - Full Diamond: [`diamond.cpp`](./diamond.cpp)
  - Number Pyramid: [`pyrmaidwithnums.cpp`](./pyrmaidwithnums.cpp)
  - Swastik: [`swastik.cpp`](./swastik.cpp)
  - Histogram / Bar Graph: [`css.cpp`](./css.cpp)

---

## 📂 Repository Topic Index

```
├── Conditionals & I/O
│   ├── leap.cpp                (Leap year validation)
│   ├── marks.cpp               (Grading system & average)
│   ├── traingle.cpp            (Triangle inequality theorem)
│   ├── largest3.cpp            (Maximum of 3 numbers)
│   └── 2ndlargestnumin3.cpp    (Second largest of 3 numbers)
│
├── Number Theory & Digits
│   ├── prime.cpp               (Prime check in O(sqrt(N)))
│   ├── primefactors.cpp        (Prime factorization in O(sqrt(N)))
│   ├── SIEVE.cpp               (Sieve of Eratosthenes)
│   ├── euclidean.cpp           (Iterative Euclidean GCD)
│   ├── reverse.cpp             (Integer reversal)
│   ├── palindromenumber.cpp    (Palindrome integer check)
│   └── armstrong.cpp           (Armstrong number check)
│
├── Recursion
│   ├── recursion_mastery.cpp   (Comprehensive recursion testbed & tracing drill)
│   ├── factorial.cpp           (Iterative & recursive factorial)
│   └── gcdrecursive.cpp        (Recursive Euclidean GCD)
│
├── 1D Arrays
│   ├── array_mastery.cpp       (Second largest, in-place reverse, frequency array)
│   ├── search.cpp              (Linear search)
│   ├── firstindex.cpp          (First occurrence search)
│   ├── maxarrray.cpp           (Array maximum)
│   └── array.cpp               (Array pass-by-pointer demonstration)
│
└── Patterns
    ├── swastik.cpp             (Grid pattern)
    ├── diamond.cpp             (Diamond star pattern)
    ├── pyrmaidwithnums.cpp     (Palindromic number pyramid)
    ├── hollowbutterfly.cpp     (Hollow butterfly pattern)
    └── css.cpp                 (Vertical histogram visualizer)
```

---

## 📖 Comprehensive Midterm Notes

For an in-depth topic breakdown, common syntax traps, and a 3-day revision roadmap, see [**MIDTERM_NOTES.md**](./MIDTERM_NOTES.md).

---

## 🛠 How to Compile and Run

Compile any file using `g++` with C++17:
```bash
g++ -std=c++17 -Wall recursion_mastery.cpp -o recursion_mastery
./recursion_mastery
```
```bash
g++ -std=c++17 -Wall array_mastery.cpp -o array_mastery
./array_mastery
```
