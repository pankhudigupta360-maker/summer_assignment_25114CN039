#include<stdio.h>
int main()
{
    int num,d,n,sum=0;
    printf("enter your num:");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    printf("the sum of your digits of the %d is:%d",num,sum);
    return 0;
}