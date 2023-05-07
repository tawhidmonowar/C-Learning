#include<iostream>
using namespace std;

void bubbleSort(int arr[], int arrSize)
{
    int i,j,temp;
    bool unsorted;
    for(i=0;i<arrSize;i++)
    {
        unsorted =  false;
        for(j=0;j<arrSize-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                unsorted = true;
            }
        }

        if(!unsorted)
        {
            break;
        }
    }
}

void print(int arr[], int arrSize)
{
    int i;
    for(i=0;i<arrSize;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5]={4,5,8,1,2};
    bubbleSort(arr,5);
    print(arr,5);

    return 0;
}
