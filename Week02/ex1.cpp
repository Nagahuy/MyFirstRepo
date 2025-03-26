// MSSV :24120064                    Name : Truong Dinh Nhat Huy
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return i; // Return the index directly
        }
    }
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

    int result = linearSearch(arr, n, key);
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
