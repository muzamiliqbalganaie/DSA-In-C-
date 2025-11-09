#include <iostream>
using namespace std;

#define max 10
int a[11] = {
    10,
    23,
    14,
    26,
    27,
    31,
    33,
    35,
    42,
    44,
    0};
int b[10];
void merging(int low, int mid, int high)
{
    int L1, L2, i;
    for (L1 = low, L2 = mid + 1, i = low; L1 <= mid && L2 <= high; i++)
    {
        if (a[L1] <= a[L2])
            b[i] = a[L1++];
        else
            b[i] = a[L2++];
    }
    while (L1 <= mid)
        b[i++] = a[L1++];
    while (L2 <= high)
        b[i++] = a[L2++];
    for (i = low; i <= high; i++)
        a[i] = b[i];
}
void mergesort(int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(low, mid);
        mergesort(mid + 1, high);
        merging(low, mid, high);
    }
    else
    {
        return;
    }
}
int main()
{
    mergesort(0, max - 1);
    cout << "The sorted array is: ";
    for (int i = 0; i < max; i++)
    {
        cout << a[i] << "";
    }
    cout << endl;
    return 0;
}