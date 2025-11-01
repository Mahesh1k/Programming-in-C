#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the array elements:");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int j=0;
    while (j<n)
    {
        sum+=arr[j];
        j++;
    }
printf("The sum of the array elements: %d",sum);
}