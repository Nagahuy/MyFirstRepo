// MSSV :24120064                    Name : Truong Dinh Nhat Huy
#include <iostream>
using namespace std;

int sentinelLinearSearch(int a[], int n, int k)
{
    int last = a[n - 1]; // Store the last element
    a[n - 1] = k;        // Set the sentinel

    int i = 0;
    while (a[i] != k)
    {
        i++;
    }

    a[n - 1] = last; // Restore the last element

    // If found within the original range, return the index; otherwise, return -1
    if (i < n - 1 || a[n - 1] == k)
        return i;

    return -1; // Return -1 if not found
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int result = sentinelLinearSearch(arr, n, key);
    if (result != -1)
    {
        cout << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
