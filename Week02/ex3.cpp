// MSSV :24120064                    Name : Truong Dinh Nhat Huy
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int findMin(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return arr[low];
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
    cout << findMin(arr, n);
    return 0;
}
