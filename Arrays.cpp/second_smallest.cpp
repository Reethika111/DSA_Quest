/*
 Problem: Second smallest Element in an Array
 Topic: Array
 Source: Striver A2Z DSA
 Time Complexity: O(n)
 Space Complexity: O(1)

 Approach:
 1. Keep two variables -> smallest, s_smallest.
 2. Traverse the array:
    -> If element < smallest : update s_smallest = smallest, smallest = element.
    -> Else if element > smallest but < s_smallest: update s_smallest.
 3. If no valid s_smallest found, return -1.
*/

#include <bits/stdc++.h>
using namespace std;

int findSecondSmallestElement(vector<int> &arr, int n)
{
    int smallest = INT_MAX;
    int s_smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            s_smallest = smallest;
            smallest = arr[i];
        }
        else
        {
            if (arr[i] < s_smallest && arr[i] != smallest)
            {
                s_smallest = arr[i];
            }
        }
    }
    return (s_smallest == INT_MAX ? -1 : s_smallest);
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

    cout << findSecondSmallestElement(arr, n) << "\n";

    return 0;
}
