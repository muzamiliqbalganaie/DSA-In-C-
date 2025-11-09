// insertion at beginning
#include <bits/stdc++.h>
#include <string>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void printList()
{
    struct node *p = head;
    cout << "\n[";

    // start from the beginning
    while (p != NULL)
    {
        cout << " " << p->data << " ";
        p = p->next;
    }
    cout << "]";
}

// insertion at the begining
void insertatbegin(int data)
{
    // create a link
    struct node *lk = (struct node *)
        malloc(sizeof(struct node));
    lk->data = data;

    // point it to old first node
    lk->next = head;

    // point first to new first node
    head = lk;
}

// insertion at the end
void insertatend(int data)
{
    // create a link
    struct node *lk = (struct node *)
        malloc(sizeof(struct node));
    lk->data = data;
    lk->next = NULL;

    // if list is empty, new node is head
    if (head == NULL)
    {
        head = lk;
        return;
    }

    // else traverse till the last node
    struct node *last = head;
    while (last->next != NULL)
        last = last->next;

    // change the next of last node
    last->next = lk;
    return;
}

// insertion at given position
void insertafternode(struct node *list, int data)
{
    struct node *lk = (struct node *)malloc(sizeof(struct node));
    lk->data = data;
    lk->next = list->next;
    list->next = lk;
}

// deletion at beginning
void deleteatbegin()
{
    head = head->next;
}

// deletion at end
// 1. START
// 2. Iterate until you find the second last element in the list.
// 3. Assign NULL to the second last element in the list.
// 4. END

void deleteatend()
{
    struct node *linkedlist = head;
    while (linkedlist->next->next != NULL)
        linkedlist = linkedlist->next;
    linkedlist->next = NULL;
}

// deletion at given position
// 1. START
// 2. Iterate until find the current node at position in the list.
// 3. Assign the adjacent node of current node in the list
//    to its previous node.
// 4. END

// delete at position
void deletenode(int key)
{
    struct node *temp = head, *prev;
    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        return;
    }

    // find the key to be deleted
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;

        // if key was not present in linked list
        if (temp == NULL)
            return;

        // unlink the node from linked list
        // Remove the node
        prev->next = temp->next;
        free(temp);
    }
}

void reverseList(struct node **head)
{
    struct node *prev = NULL, *cur = *head, *tmp;
    while (cur != NULL)
    {
        tmp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = tmp;
    }
    *head = prev;
}

// search operation
int searchlist(int key)
{
    struct node *temp = head;
    int index = 0;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

// main function
int main()
{
    int k = 0;
    insertatbegin(12);
    insertatbegin(22);
    insertatbegin(30);
    insertatbegin(44);
    insertatbegin(50);
    insertatend(11);
    insertafternode(head->next, 66);
    insertafternode(head->next->next, 90);
    cout << "Linked List: ";

    // print list
    printList();
    deleteatbegin();
    cout << "\nLinked List after deletion at begining: ";
    printList();
    deleteatend();
    cout << "\nLinked List after deletion at end: ";
    printList();

    // deletenode(90);
    deletenode(44);
    cout << "\nLinked List after deletion at given position: ";
    printList();
    reverseList(&head);
    cout << "\nReversed Linked List: ";
    printList();

    // search opertion
    int key;
    cout << "Enter the element :";
    cin >> key;
    int pos = searchlist(key);
    if (pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found";
    return 0;
}