#include <iostream>
using namespace std;
// ...existing code...
// change MAXSIZE to a constant and use it for the array size
const int MAXSIZE = 8;
int stack[MAXSIZE];
int top = -1;
/* Check if the stack is empty */
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
/* Check if the stack is full */
int isfull()
{
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}
/* Function to return the topmost element in the stack */
int peek()
{
    if (isempty())
    {
        cout << "Cannot peek, Stack is empty." << endl;
        return -1;
    }
    return stack[top];
}
/* Function to delete from the stack */
int pop()
{
    int data;
    if (!isempty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        cout << "Could not retrieve data, Stack is empty." << endl;
        return -1;
    }
}
/* Function to insert into the stack */
void push(int data)
{
    if (!isfull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
        cout << "Could not insert data, Stack is full." << endl;
}
/* Main function */
int main()
{
    push(44);
    push(10);
    push(62);
    push(123);
    push(15);
    cout << "Element at top of the stack: " << peek() << endl;
    cout << "Elements: " << endl;
    // print stack data
    while (!isempty())
    {
        int data = pop();
        cout << data << endl;
    }
    cout << "Stack full: " << (isfull() ? "true" : "false") << endl;
    cout << "Stack empty: " << (isempty() ? "true" : "false") << endl;
    return 0;
}