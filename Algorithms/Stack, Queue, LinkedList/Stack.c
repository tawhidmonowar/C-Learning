#include <stdio.h>

int i,stackArray[10],top=-1;

int pushStack(int data)
{
    if(top>=-1&&top<10)
    {
        top=top+1;
        stackArray[top]=data;
    }
    else
    {
        printf("Error! while pushing data");
    }
}

int popStack()
{
    if(top>-1)
    {
        int data;
        data = stackArray[top];
        top = top-1;
        return data;
    }
    else
    {
        printf("Error! while poping data");
    }
}

int main()
{
    pushStack(10);
    pushStack(50);
    pushStack(60);
    pushStack(70);
    pushStack(20);

    for(i=0;stackArray[i]!='\0';i++)
    {
        printf("%d\n",popStack());
    }

    return 0;
}

