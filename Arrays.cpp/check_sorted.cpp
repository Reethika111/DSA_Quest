/*
 Problem: Check if the array is sorted.
 Topic: Array
 Source: Striver A2Z DSA
 Time Complexity: O(n)
 Space Complexity: O(1)

 Approach:
 1. Traverse the array from index 1 to n-1.
 2. For each index, check if arr[i] < arr[i-1].
 3. If found, return false(not sorted).
 4. If no such case is found till the last index, return true(sorted).
*/

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr, int n)
{
   for(int i =1; i<n; i++){
    if(arr[i] < arr[i-1]) return false;
   }
   return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << isSorted(arr, n) << "\n";

    return 0;
}
