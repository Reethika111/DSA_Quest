/*
Problem: Quick Sort( Divide and Conquer)
Topic: Sorting
Source: Striver A to Z DSA
Time Complexity: O(nlogn) on average, O(n^2) in worst case
Space Complexity: O(logn) for recursion stack

Approach:
1. Pick a pivot.
2. Put all smaller numbers on the left, bigger numbers on the right.
3. Do the same(recursively) for the left part and right part.
4. Finally, the array becomes sorted.

Example:
Input: n = 5
       64 25 12 22 11
Output: 11 12 22 25 64
*/

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        quick_sort(arr, low, pIndex - 1);
        quick_sort(arr, pIndex + 1, high);
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
    quick_sort(arr, 0, n - 1);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
