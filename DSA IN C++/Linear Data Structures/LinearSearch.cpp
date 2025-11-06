#include <iostream>
using namespace std;

void linear_search(int arr[], int n, int key)
{
	int i, count = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			cout << " The element is found t position (0-index)" << i << endl;
			count = count + 1;
		}
	}
	if (count == 0)
		cout << "The element is not present in the array" << endl;
}

int main()
{
	int i, n, key;
	cout << "enter the number of elements: ";
	cin >> n;
	int arr[n];
	cout << "enter the elements: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "enter the search element: ";
	cin >> key;

	linear_search(arr, n, key);
	return 0;
}