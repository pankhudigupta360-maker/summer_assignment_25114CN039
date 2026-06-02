#include<stdio.h>
int main()
{
    int x,n,i,power=1;
    printf("enter your value of x:");
    scanf("%d",&x);
    printf("enter your value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        power=power*x;
    }
    printf("%d is the %d times power of %d",power,n,x);
    return 0;
}