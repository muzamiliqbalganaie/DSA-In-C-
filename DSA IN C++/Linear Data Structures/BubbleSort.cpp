#include <iostream>
using namespace std;

void bubbleSort(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int swaps = 0; // flag to detect any swap is there or not

        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // when the current item is bigger than next
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps = 1; // set the flag
            }
        }
        if (!swaps)
            break; // if no swap happened, the array is sorted
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    bubbleSort(arr, n);
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}