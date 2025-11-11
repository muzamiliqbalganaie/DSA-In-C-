#include <iostream>
#include<string>
using namespace std;
#define MAX 6
int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

bool isFull() {
    return itemCount == MAX;
}
bool isEmpty() {
    return itemCount == 0;
}
int removeData() {
    int data = intArray[front++];
    if(front == MAX) {
        front = 0;
    }
    itemCount--;
    return data;
}

void insert(int data) {
    if(!isFull()) {
        if(rear == MAX - 1) {
            rear = -1;
        }
        intArray[++rear] = data;
        itemCount++;
    }
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    cout << "Queue: ";
    while(!isEmpty()) {
        int data = removeData();
        cout << data << " ";
    }
    return 0;
}