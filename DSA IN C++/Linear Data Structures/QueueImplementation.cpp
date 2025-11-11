#include <iostream>
#include <string>
using namespace std;
#define MAX 6
int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

bool isFull()
{
    return itemCount == MAX;
}
bool isEmpty()
{
    return itemCount == 0;
}
int removeData()
{
    int data = intArray[front++];
    if (front == MAX)
    {
        front = 0;
    }
    itemCount--;
    return data;
}
// enqueue operation
void insert(int data)
{
    if (!isFull())
    {
        if (rear == MAX - 1)
        {
            rear = -1;
        }
        intArray[++rear] = data;
        itemCount++;
    }
}

// DEQUEUE operation
int removeData()
{
    int data = intArray[front++];
    if (front == MAX)
    {
        front = 0;
    }
    itemCount--;
    return data;
}
int main()
{
    int i;

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    cout << "Queue: ";
    for (i = 0; i < MAX; i++)
    {
        cout << intArray[i] << " ";
    }
    // Removing elements from the queue
    int num = removeData();
    cout << "\nRemoved Element: " << num << endl;
    cout << "Queue after removing an element: ";
    while (!isEmpty())
    {
        int data = removeData();
        cout << data << " ";
    }
    return 0;
}