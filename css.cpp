#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 1, 3, 4, 5, 9, 6};
    int len = sizeof(arr) / sizeof(int);
    int mx = arr[0];

    for (int i = 0; i < len; i++)
        mx = max(mx, arr[i]);

    for (int row = 1; row <= mx; row++)
    {
        int ht = mx - row + 1;
        for (int col = 1; col <= len; col++)
        {
            if (arr[col - 1] >= ht)
            {
                cout << "*";
            }
            else
                cout << " ";
            cout << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}