#include<stdio.h>
void hello()
{
    printf("Are you enjoying C programming?\n");
}
int square(int x)
{
    return x^2;
}
int main()
{
    hello();
    int x=5;
    int result;
    result=square(5);
    printf("square of %d is: %d",x,result);
    return 0;
}