/*
 Problem: Largest Element in an Array
 Topic: Array
 Source: Striver A2Z DSA
 Time Complexity: O(n)
 Space Complexity: O(1)

 Approach:
 1. Initialize a variable 'maxi' with INT_MIN(smallest possible integer).
 2. Iterate through the array from start to end.
 3. For each element, compare it with maxi:
     - If the element is bigger, update maxi.
 4. After checking all elements, the maxi is the answer.
*/

#include <bits/stdc++.h>
using namespace std;

int findLargestElement(vector<int> &arr, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
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

    int largest = findLargestElement(arr, n);
    cout << "The largest element in the array is: " << largest << "\n";

    return 0;
}
