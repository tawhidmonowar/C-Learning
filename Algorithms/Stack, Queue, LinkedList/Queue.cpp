#include <iostream>
using namespace std;
int queueX[10],frontX=-1,backX=-1;

int isFull()
{
    if(frontX>=10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enQueue(int data)
{
    if(!isFull())
    {
        backX++;
        queueX[backX] = data;
    }
    else
    {
        cout << "Queue is full";
    }
}

int isEmpty()
{
    if(backX<0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int deQueue()
{
    int data;
    frontX++;
    data = queueX[frontX];
    return data;
}

int main()
{
    enQueue(5);
    enQueue(6);
    enQueue(7);
    enQueue(8);
    enQueue(9);
    enQueue(10);

    cout << deQueue();
    cout << deQueue();
    cout << deQueue();
    cout << deQueue();
    cout << deQueue();
    cout << deQueue();

    return 0;
}
