#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int arr_rev[n];
    printf("Enter the elements of array:");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    for (i=0; i<n; i++)
    {
        arr_rev[n-i-1]=arr[i];
    }
    for (i=0; i<n; i++)
    {
printf("%d\t",arr_rev[i]);
    }
}