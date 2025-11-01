#include<stdio.h>
int getSum(int arr[],int n)
{
 int sum=0;
    int j=0;
    while (j<n)
    {
        sum+=arr[j];
        j++;
    }
    return sum;   
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    int result;
    printf("Enter the array elements:");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    result=getSum(arr,n);
printf("The sum of the array elements: %d",result);
}