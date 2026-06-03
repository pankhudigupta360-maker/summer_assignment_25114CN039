#include<stdio.h>
int dig(int n);
int main()
{
    int num,sum=0;
    printf("enter your value of num:");
    scanf("%d",&num);
    sum=sum+dig(num);
    printf("sum of the digits of the %d is %d",num,sum);
}
int dig(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10)+dig(n/10);
}