#include <iostream>
using namespace std;

int stackX[10],top=10,bottom=-1;

int isEmpty()
{
    if(bottom<0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if(bottom>=top)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int data)
{
    if(!isFull())
    {
        bottom++;
        stackX[bottom] = data;
    }
    else
    {
        cout << "Stack is Full!\n";
    }
}

int pop()
{
    int temp;

    if(!isEmpty())
    {
        temp = stackX[bottom];
        bottom--;
        return temp;
    }
    else
    {
        cout << "Stack is Empty!\n";
    }
}

int main()
{
    push(5);
    push(6);
    push(7);
    push(1);

    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    
    return 0;
}
