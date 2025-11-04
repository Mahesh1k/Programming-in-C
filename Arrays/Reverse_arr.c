#include<stdio.h>
void rev_arr(int arr[], int n)
{
    int temp;
    int j;
    int k;
    for (j=0; j<n/2; j++)
    {
       temp=arr[j];
        arr[j]=arr[n-1-j];
        arr[n-1-j]=temp;
    }
    printf("reversed array:");
    for (k=0; k<n; k++)
    {
        printf("%d",arr[k]);
    }
    
}
int main()
{
     int n;
     int result;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the array elements:");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
 rev_arr(arr,n);
 return 0;
}