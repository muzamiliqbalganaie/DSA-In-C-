#include <iostream>
using namespace std;

void swapping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void selectionSort(int *array, int size)
{
    int i, j, imin;
    for (i = 0; i < size - 1; i++)
    {
        imin = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[imin])
                imin = j;
        }
        // placing in correct position
        swapping(array[i], array[imin]);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}