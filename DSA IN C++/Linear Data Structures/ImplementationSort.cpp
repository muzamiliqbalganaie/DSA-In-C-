#include <iostream>
using namespace std;
void insertionsort(int *array, int size)
{
    int key,j;
    for(int i =1; i<size;i++) {
        key = array[i];//take value
        j = i;
        while(j > 0 && array[j-1] > key) {
            array[j] = array[j-1];
            j--;
        }
        array[j] = key; //
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i =0; i<n; i++) {
        cin >> arr[i];
    }
    insertionsort(arr, n);
    cout << "The sorted array is: ";
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}