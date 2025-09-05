/*
Problem: Bubble Sort( Push max element to the last by adjacent swaps)
Topic: Sorting
Source: Striver A to Z DSA
Time Complexity: O(n^2) ->worst case; Best Case-> O(n)
Space Complexity: O(1)

Approach:
1. Iterate through the array from start to end.
2. Compare each pair of adjacent elements.
3. Swap them if they are in the wrong order.
4. After each pass, the largest element moves to its correct position(bubbles up).
5. We stop early if no swaps are made in a pass.

Example:
Input: n = 5
       64 25 12 22 11
Output: 11 12 22 25 64
*/

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 1; i--)
    {
        int swapped = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // code here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
