#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int*y)
{
    int temp =*x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int arr[],int size)
{
    int i,j,flag = 0;
    for(i=0;i<size-1;i++)
    {
        flag=0;
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        } 

        if(flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int size;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}