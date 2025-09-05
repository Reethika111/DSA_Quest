/*
Problem: Selection Sort( All about selecting minimum's and swapping)
Topic: Sorting
Source: Striver A to Z DSA
Time Complexity: O(n^2)
Space Complexity: O(1)

Approach:
1. Iterate through the array, assume the current index is the minimum.
2. Find the actual minimum element in the remaining unsorted part.
3. Swap it with the current index.
4. Repeat until the array is sorted.

Example:
Input: n = 5
       64 25 12 22 11
Output: 11 12 22 25 64
*/

#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
