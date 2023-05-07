#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n-1);

    printf("\nAfter sorting: \n");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void mergeSort(int arr[], int l, int h)
{

    if(l < h)
    {
        int m;
        m = (l + h) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, h);

        mergeArray(arr, l, m, h);
    }
}

void mergeArray(int arr[], int l, int m, int h)
{
    int i, j, k, a = m-l+1, b = h-m;
    int temp1[a], temp2[b];

    for(i=0; i<a; i++)
        temp1[i] = arr[l+i];
    for(j=0; j<b; j++)
        temp2[j] = arr[m+1+j];

    i=0, j=0, k=l;

    while(i<a && j<b)
    {
        if(temp1[i] <= temp2[j])
        {
            arr[k] = temp1[i];
            i++;
        }
        else
        {
            arr[k] = temp2[j];
            j++;
        }
        k++;
    }

    while(i<a)
    {
        arr[k] = temp1[i];
        i++;
        k++;
    }
    while(j<b)
    {
        arr[k] = temp2[j];
        j++;
        k++;
    }
}