#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    unsigned mx_size;
    int *arry;
};
struct Stack *create(unsigned size)
{
    struct Stack *stack = new Stack;
    stack->mx_size = size;
    stack->top = -1;
    stack->arry = new int[stack->mx_size];
    return stack;
}
bool isFull(struct Stack *stack)
{
    if (stack->top == stack->mx_size - 1)
    {
        return true;
    }
    return false;
}
bool isEmpty(struct Stack *stack)
{
    if (stack->top == -1)
        return true;
    return false;
}
void push(struct Stack *stack, int val)
{
    if (isFull)
        return;
    stack->arry[++stack->top] = val;
}
int pop(struct Stack *stack)
{
    if (isEmpty)
        return -1;
    return stack->arry[stack->top--];
}
int peek(struct Stack *stack)
{
    if (isEmpty)
        return -1;
    return stack->arry[stack->top];
}

int main()
{
    struct Stack *stack = create(10);
    push(stack, 10);
    push(stack, 20);
    cout << peek(stack) << endl;
    cout << pop(stack) << endl;
    return 0;
}