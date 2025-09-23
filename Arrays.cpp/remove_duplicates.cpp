#include <bits/stdc++.h>
using namespace std;

// Problem: Remove duplicates in a sorted array
// Two Pointer Technique( Tc -> O(n), Sc -> O(1))

int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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

    int k = removeDuplicates(arr, n);
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}
