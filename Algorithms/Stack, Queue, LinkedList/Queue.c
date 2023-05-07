#include <stdio.h>

int i,queueArray[10],top=-1;


int enQueue(int data)
{
    if(top<=10)
    {
        top = top+1;
        queueArray[top]=data;
    }else
    {
        printf("Queue Full!");
    }
}


int deQueue()
{
    int data,i;

    if(top>-1)
    {
        data = queueArray[0];
        for(i=0;queueArray[i]!='\0';i++)
        {
            queueArray[i]=queueArray[i+1];
        }
    }else
    {
        printf("Queue is empty!");
    }

    return data;
}



int main()
{
    int i;

    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    enQueue(70);

    for(i=0;i<=4;i++)
    {
        printf("%d\n",deQueue());
    }

    return 0;
}
