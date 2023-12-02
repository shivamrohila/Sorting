#include<stdio.h>
#include<stdlib.h>
void shellSort(int arr[],int n)
{
    int gap,i,j,temp;
    for(gap=n/2;gap>=1;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            temp = arr[i];
            j=i-gap;
            while(j>=0 && arr[j]>temp)
            {
                arr[j+gap]=arr[j];
                j=j-gap;
            }
            arr[j+gap]=temp;
        }
    }
}
int main()
{
    int arr[] = {11,3,7,12,16,9,24,5,10,15};
    int n=10,i;
    shellSort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}