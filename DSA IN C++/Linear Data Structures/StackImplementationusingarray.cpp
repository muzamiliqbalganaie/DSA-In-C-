#include <iostream>
using namespace std;

// Define Stack classs
class Stack
{
private:
    int top;
    int arr[100];

public:
    // COnstructor to initilize an aempty stack
    Stack()
    {
        top = -1;
    }

    // Function to add an item to stack
    void push(int x)
    {
        if (top >= 99)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        // add item and increment top
        arr[++top] = x;
        cout << "Pushed" << x << " to stack\n";
    }

    // function to remove an item from stack
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        // return top item and decrement top
        return arr[top--];
    }

    // function to return top item of stack
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[top];
    }

    // function to check if stack is empty
    bool isEmpty()
    {
        return (top < 0);
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element is " << s.peek() << endl;
    cout << "Elements present in the stack: ";
    while (!s.isEmpty())
    {
        cout << s.pop() << " ";
    }
    return 0;
}