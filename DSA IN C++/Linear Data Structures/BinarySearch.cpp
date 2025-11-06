#include <iostream>
using namespace std;
void binary_search(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    bool found = false;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            cout << "The element is found at position (0-index): " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (!found)
    {
        cout << "The element is not present in the array" << endl;
    }
}

int main()
{
    int i, n, key;
    cout << "enter the number of the elements:";
    cin >> n;
    int arr[n];
    cout << "enter the elements in sorted order:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0 && arr[i] < arr[i - 1])
        {
            cout << "Please enter the elements in sorted order." << endl;
            return 1;
        }
    }
    cout << "enter the search element:";
    cin >> key;
    binary_search(arr, n, key);
    return 0;
}