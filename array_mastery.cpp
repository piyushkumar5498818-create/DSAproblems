#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// ==========================================
// 1. PASSING ARRAYS TO FUNCTIONS & POINTER DECAY
// ==========================================
// High-yield written/MCQ trap:
// When an array is passed to a function, it decays to a pointer (int*).
// sizeof(arr) inside a function returns sizeof(int*) which is 8 bytes on 64-bit systems!
void demonstrateArrayDecay(int arr[], int size) {
    cout << "Inside function: sizeof((int*)arr) = " << sizeof((int*)arr) 
         << " bytes (pointer size!), NOT " << (size * sizeof(int)) << " bytes!\n";
    cout << "Elements doubled in function: ";
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // Changes reflect in caller because it's passed by address
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// ==========================================
// 2. REVERSE ARRAY IN-PLACE (TWO POINTERS)
// ==========================================
// Time: O(N), Extra Space: O(1)
void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        // Swap elements at left and right
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

// ==========================================
// 3. SECOND LARGEST IN A SINGLE PASS (O(N))
// ==========================================
// Common exam question: Find second largest without sorting!
int findSecondLargest(int arr[], int size) {
    if (size < 2) return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

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

// ==========================================
// 4. CHECK IF ARRAY IS A PALINDROME
// ==========================================
bool isArrayPalindrome(int arr[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        if (arr[i] != arr[j]) return false;
        i++;
        j--;
    }
    return true;
}

// ==========================================
// 5. FIRST AND LAST OCCURRENCE (LINEAR SEARCH)
// ==========================================
void findFirstAndLastOccurrence(int arr[], int size, int target) {
    int first = -1, last = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    cout << "Target " << target << " -> First Index: " << first 
         << ", Last Index: " << last << "\n";
}

// ==========================================
// 6. FREQUENCY COUNTING USING ARRAY HASH TABLE
// ==========================================
void countFrequencies(int arr[], int size) {
    // Assuming elements are non-negative and <= 1000
    int maxVal = 0;
    for (int i = 0; i < size; i++) maxVal = max(maxVal, arr[i]);

    vector<int> freq(maxVal + 1, 0);
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    cout << "Frequencies:\n";
    for (int i = 0; i <= maxVal; i++) {
        if (freq[i] > 0) {
            cout << "  Value " << i << " occurs " << freq[i] << " times\n";
        }
    }
}

int main() {
    cout << "=== ARRAY MASTERY EXAM CHEAT SHEET ===\n\n";

    int arr[] = {12, 35, 1, 10, 34, 1, 35};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // 1. Second largest
    cout << "1. Second Largest Element: " << findSecondLargest(arr, n) << "\n";

    // 2. First & last occurrence
    findFirstAndLastOccurrence(arr, n, 1);

    // 3. Reverse in-place
    int copyArr[] = {1, 2, 3, 4, 5};
    int copySize = 5;
    cout << "\n2. Reversing [1, 2, 3, 4, 5] in-place: ";
    reverseArray(copyArr, copySize);
    for (int i = 0; i < copySize; i++) cout << copyArr[i] << " ";
    cout << "\n";

    // 4. Palindrome check
    int palArr[] = {1, 2, 3, 2, 1};
    cout << "\n3. Is [1, 2, 3, 2, 1] a palindrome? " 
         << (isArrayPalindrome(palArr, 5) ? "YES" : "NO") << "\n";

    // 5. Pointer decay test
    cout << "\n4. Passing array to function:\n";
    cout << "In main: sizeof(arr) = " << sizeof(arr) << " bytes\n";
    demonstrateArrayDecay(arr, n);

    // 6. Frequency count
    cout << "\n5. Element frequencies in array:\n";
    countFrequencies(arr, n);

    return 0;
}
