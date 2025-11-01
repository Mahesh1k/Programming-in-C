#include<stdio.h>
int main()
{
    int arr[]={3,5,3,106,8,97,56,78};
    int max_Val=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    for (i=1; i<n; i++)
    {
        if (arr[i]>max_Val)
        max_Val=arr[i];
    }
    printf("%d",max_Val);
    return 0;
}