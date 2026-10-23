# Targeted Midterm Exam Guide: Basics to Arrays & Recursion

> [!IMPORTANT]
> **Confirmed Scope**: This guide is strictly tailored to:
> 1. **Conditionals & I/O** (`if-else`, switch, ternary, logical operators)
> 2. **Loops & Number Theory** (`for`, `while`, digit reversal, Armstrong, primes, GCD)
> 3. **Pattern Printing** (Pyramids, hollow shapes, diamonds, swastik)
> 4. **Basic 1D Arrays** (Traversal, linear search, min/max, 2nd largest, in-place reverse, frequency array, pointer decay)
> 5. **Recursion** (Base case vs recursive step, call stack tracing, math recursion, recursive array traversal)

---

## 1. Quick Repository Fixes Completed

All existing broken and buggy files in your workspace have been repaired and verified:
- [`gcdrecursive.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/gcdrecursive.cpp): Corrected Euclidean recursion parameter order from `b % a` to `a % b`.
- [`factorial.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/factorial.cpp): Added function prototype before `main()` and added both iterative and recursive implementations.
- [`search.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/search.cpp): Replaced invalid `return i;` from `main()` with standard `cout` output.
- [`firstindex.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/firstindex.cpp): Added early `break` on first match and `-1` if not found.
- [`maxarrray.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/maxarrray.cpp): Fixed out-of-bounds `arr[a]`, inner-loop variable shadowing, and added `<climits>`.
- [`gcd.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/gcd.cpp) & [`euclidean.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/euclidean.cpp): Repaired brute force loop and removed spurious in-loop prints.
- [`primefactors.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/primefactors.cpp) & [`hollowbutterfly.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/hollowbutterfly.cpp): Fixed stray typos and syntax errors.
- [`SIEVE.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/SIEVE.cpp): Populated the empty file with the full Sieve of Eratosthenes ($O(N \log \log N)$).
- **NEW**: Created [`recursion_mastery.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/recursion_mastery.cpp) and [`array_mastery.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/array_mastery.cpp) as all-in-one exam testbeds.

---

## 2. Topic 1: Recursion (High-Probability Exam Focus)

Midterm exams test recursion in two ways:
1. **Coding Questions**: Writing functions with clean base cases and recurrence relations.
2. **Call-Stack Tracing / Output Prediction**: "What does this code output?"

### A. The Golden Rule of Recursion
Every recursive function requires:
1. **Base Case**: The simplest terminating condition (prevents stack overflow).
2. **Recursive Step**: Calling the function with a strictly smaller sub-problem ($N - 1, N / 2, \text{idx} + 1$).
3. **Work Before Call (Head)** vs **Work After Call (Tail/Unwinding)**.

### B. Core Recursion Templates (From [`recursion_mastery.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/recursion_mastery.cpp))

```cpp
// 1. Print 1 to N (Head Recursion - prints on unwinding)
void print1ToN(int n) {
    if (n == 0) return;
    print1ToN(n - 1);
    cout << n << " ";
}

// 2. Print N to 1 (Tail Recursion - prints going forward)
void printNTo1(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNTo1(n - 1);
}

// 3. Factorial: O(N) time, O(N) stack
long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

// 4. Fibonacci: O(2^N) time, O(N) stack
int fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

// 5. Euclidean GCD: O(log(min(a, b)))
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 6. Fast Power O(log N) - Very common exam question!
long long power(int x, int n) {
    if (n == 0) return 1;
    long long half = power(x, n / 2);
    if (n % 2 == 0) return half * half;
    else return x * half * half;
}

// 7. Check if Array is Sorted Recursively
bool isSorted(int arr[], int n, int idx = 0) {
    if (idx >= n - 1) return true;
    if (arr[idx] > arr[idx + 1]) return false;
    return isSorted(arr, n, idx + 1);
}
```

### C. Classic Tracing Drill
```cpp
void trace(int n) {
    if (n <= 0) return;
    cout << n << " ";
    trace(n - 1);
    cout << n << " ";
}
```
**Execution Tree for `trace(3)`**:
```
Call trace(3): Prints "3" -> calls trace(2)
  Call trace(2): Prints "2" -> calls trace(1)
    Call trace(1): Prints "1" -> calls trace(0)
      Call trace(0): returns
    Resumes trace(1): Prints "1" -> returns
  Resumes trace(2): Prints "2" -> returns
Resumes trace(3): Prints "3" -> returns

Final Output: 3 2 1 1 2 3
```

---

## 3. Topic 2: Basic 1D Arrays

### A. The Pointer Decay Trap (Guaranteed MCQ / Viva Question)
When an array `arr` is passed to a function:
```cpp
void test(int arr[], int n) {
    cout << sizeof(arr); // Outputs 8 (size of pointer on 64-bit OS), NOT n * sizeof(int)!
}
```
> [!NOTE]
> Arrays in C++ cannot be passed by value. They automatically decay into a pointer to the first element (`int*`). You **must always pass the array size `n` as a separate argument**. Modifications made inside the function affect the original array in `main`.

### B. Core Array Operations (From [`array_mastery.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/array_mastery.cpp))

```cpp
// 1. Reverse Array In-Place: O(N) time, O(1) space
void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

// 2. Second Largest in a Single Pass: O(N) time (No sorting!)
int secondLargest(int arr[], int n) {
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    return (second == INT_MIN) ? -1 : second;
}

// 3. Element Frequency Counting: O(N) using direct index hashing
void printFrequencies(int arr[], int n, int maxVal) {
    vector<int> freq(maxVal + 1, 0);
    for (int i = 0; i < n; i++) freq[arr[i]]++;
    for (int i = 0; i <= maxVal; i++) {
        if (freq[i] > 0) cout << i << " appears " << freq[i] << " times\n";
    }
}
```

---

## 4. Topic 3: Number Theory & Digit Manipulation

| Problem | Key Formula / Technique | Time Complexity | File in Repo |
| :--- | :--- | :--- | :--- |
| **Digit Count** | `for (; n > 0; n /= 10) count++;` | $O(\log_{10} N)$ | [`numbrofdig.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/numbrofdig.cpp) |
| **Reverse Number** | `rev = rev * 10 + (n % 10); n /= 10;` | $O(\log_{10} N)$ | [`reverse.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/reverse.cpp) |
| **Palindrome Number** | Compare original `n` with reversed `rev` | $O(\log_{10} N)$ | [`palindromenumber.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/palindromenumber.cpp) |
| **Armstrong Number** | $\sum (\text{digit})^{\text{number of digits}} == n$ | $O(\log_{10} N)$ | [`armstrong.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/armstrong.cpp) |
| **Prime Check** | Loop `i * i <= n` (factors come in pairs $(i, n/i)$) | $O(\sqrt{N})$ | [`prime.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/prime.cpp) |
| **Prime Factors** | Trial division while `n % i == 0`, reduce `n /= i` | $O(\sqrt{N})$ | [`primefactors.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/primefactors.cpp) |
| **Sieve of Eratosthenes** | Cross out multiples starting at $p^2$ | $O(N \log \log N)$ | [`SIEVE.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/SIEVE.cpp) |
| **GCD (Euclidean)** | $a = a \% b$ until zero | $O(\log(\min(a, b)))$ | [`euclidean.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/euclidean.cpp) |

---

## 5. Topic 4: Pattern Printing Master Strategy

Every pattern problem follows the exact same 3-step nested loop structure:
1. **Outer loop**: Controls rows ($i = 1$ to $N$).
2. **Inner loop 1 (Spaces)**: Prints indentation (e.g. $N - i$ spaces).
3. **Inner loop 2 (Stars/Numbers)**: Prints characters (e.g. $2i - 1$ stars, or $1 \dots i \dots 1$).

### Key Pattern Logic Table

```
Pyramid:
Row i (1 to N):
  Spaces: N - i
  Stars : 2 * i - 1

Inverted Pyramid:
Row i (N down to 1):
  Spaces: N - i
  Stars : 2 * i - 1

Diamond:
Combine Pyramid (1 to N) + Inverted Pyramid (N-1 down to 1)

Hollow Shapes:
Print '*' if (row == 1 || row == N || col == 1 || col == max_col), else print ' '

Swastik (swastik.cpp):
Mid-row (i == n/2 + 1) or Mid-col (j == n/2 + 1) -> '*'
Corners matching quadrant bounds -> '*'
```

---

## 6. Topic 5: Conditionals & Loops (Syntax Traps)

1. **The Empty Loop Semicolon**:
   ```cpp
   int i;
   for (i = 1; i <= 5; i++); // Notice semicolon! Loop runs and does nothing
   cout << i; // Prints 6, NOT 1 2 3 4 5
   ```
   *(Present in [`emptyforloop.cpp`](file:///Users/piyushkumar/CS/PRACTICE/DSA/emptyforloop.cpp))*

2. **Operator Precedence**:
   - `&&` has higher precedence than `||`.
   - `a || b && c` is evaluated as `a || (b && c)`.
   - Arithmetic (`+`, `-`, `*`, `/`, `%`) binds tighter than relational (`<`, `>`, `==`).

3. **Leap Year Condition**:
   ```cpp
   bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
   ```

4. **Swapping without a third variable**:
   - Arithmetic: `a = a + b; b = a - b; a = a - b;` (Watch out for overflow!)
   - XOR bitwise: `a = a ^ b; b = a ^ b; a = a ^ b;`
   - Built-in: `swap(a, b);`
   - *Avoid*: `a = a + b - (b = a);` (Unsequenced modification in older C++ standards).

---

## 7. Fast Revision Checklist Before Walking In

- [ ] Can you trace a recursive function call on paper and draw its call stack?
- [ ] Do you remember why `sizeof(arr)` inside a function is 8 bytes?
- [ ] Can you write `int secondLargest(int arr[], int n)` in $O(N)$ without sorting?
- [ ] Can you reverse an array in-place using `left` and `right` indices?
- [ ] Can you write `int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }` in your sleep?
- [ ] Do you know why prime checking stops at $\sqrt{n}$ instead of $n$?
- [ ] Can you break down any pattern into: rows $\to$ leading spaces $\to$ symbols?
