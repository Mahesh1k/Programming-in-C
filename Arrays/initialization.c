#include<stdio.h>
int main()
{
    int arr[]={2,5,6,3,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    for (i=0; i<n; i++)
    {
        printf("Element %d of array: %d",i+1,arr[i]);
        printf("\n");
    }
    printf("size of array: %d",sizeof(arr));
}