#include <bits/stdc++.h>
using namespace std;
const int mx_size = 100;
int arr[mx_size];
int front = -1, rear = -1, my_size = 0;

bool isEmpty()
{
    if (my_size == 0)
        return true;
    return false;
}
bool isFull()
{
    if (my_size == mx_size)
        return true;
    return false;
}
void enqueue(int value)
{
    if (isFull())
    {
        cout << "FULL" << endl;
        return;
    }
    if (isEmpty())
        front = rear = 0;
    else
        rear = (rear + 1) % mx_size;
    arr[rear] = value;
    my_size++;
}
int dequeue()
{
    if (isEmpty())
    {
        cout << "EMPTY" << endl;
        return -1;
    }
    int value = arr[front];
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % mx_size;
    my_size--;
    return value;
}
int main()
{
    enqueue(2);
    enqueue(3);
    cout << dequeue() << endl;
    cout << dequeue() << endl;
    return 0;
}