#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int arr[], int n)
{
    struct Node *t, *last;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; ++i)
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; ++i)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

struct Node *search(struct Node *p, int key)
{
    while (p)
    {
        if (p->data == key)
            return p; // Element found
        p = p->next;
    }
    return NULL; // Element not found
}

void update(struct Node *p, int oldData, int newData)
{
    struct Node *nodeToUpdate = search(p, oldData);
    if (nodeToUpdate != NULL)
    {
        nodeToUpdate->data = newData;
        cout << "Element " << oldData << " updated to " << newData << "." << endl;
    }
    else
    {
        cout << "Element " << oldData << " not found in the linked list." << endl;
    }
}

int main()
{
    int arr[] = {3, 5, 7, 10, 15};
    create(arr, 5);

    int key = 10;
    struct Node *foundNode = search(first, key);

    if (foundNode != NULL)
    {
        cout << "Element " << key << " found in the linked list." << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the linked list." << endl;
    }

    int oldData = 5;
    int newData = 8;
    update(first, oldData, newData);

    display(first);
    return 0;
}