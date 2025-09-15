/*
 Problem: Second  Largest Element in an Array
 Topic: Array
 Source: Striver A2Z DSA
 Time Complexity: O(n)
 Space Complexity: O(1)

 Approach:
 1. Keep two variables -> largest, s_largest.
 2. Traverse the array:
    -> If element > largest: update s_largest = largest, largest = element.
    -> Else if element < largest but > s_largest: update s_largest.
 3. If no valid s_largest found, return -1.
*/

#include <bits/stdc++.h>
using namespace std;

int findSecondLargestElement(vector<int> &arr, int n)
{
    int largest = INT_MIN;
    int s_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            s_largest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] > s_largest && arr[i] != largest)
            {
                s_largest = arr[i];
            }
        }
    }
    return (s_largest == INT_MIN ? -1 : s_largest);
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

    cout << findSecondLargestElement(arr, n) << "\n";

    return 0;
}
