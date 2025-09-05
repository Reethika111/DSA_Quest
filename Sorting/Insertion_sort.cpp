/*
Problem: Insertion Sort( Takes an element and places it at its correct position)
Topic: Sorting
Source: Striver A to Z DSA
Time Complexity: O(n^2) ->worst case; Best Case-> O(n)
Space Complexity: O(1) -> in-place sorting

Approach:
1. Iterate through the array from the second element to the end.
2. Pick the current element and compare it with its left elements.
3. Shift all larger elements one position to the right.
4. Place the current element at its correct position.
5. Repeat for all elements.

Example:
Input: n = 5
       64 25 12 22 11
Output: 11 12 22 25 64
*/

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
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
    insertion_sort(arr);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
