
#include <bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int> &arr, int n)
{
    // Write your code here.
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}

int main()
{

    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    vector<int> arrNew(size);

    arrNew = rotateArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arrNew[i]<<" ";
    }
    return 0;
}