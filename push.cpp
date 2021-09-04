#include <iostream>
using namespace std;

#define size 10

int a[size];
int top=-1;

void push(int value);
void pop();
void show_top();
void displaystk();

int main()
{
    push(78);
    push(67);
    push(66);
    push(99);
    pop();
    displaystk();
    return 0;
}

void push(int value)
{
    if (top = size-1)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        top++;
        a[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }

    else
    {
        top--;
    }
}

void show_top()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << a[top] << endl;
    }
}

void displaystk()
{
    if (top == -1)
    {
        cout << "stack is empty";
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << a[i] <<" ";
        }
    }
}
