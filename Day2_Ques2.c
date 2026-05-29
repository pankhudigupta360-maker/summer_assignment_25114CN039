#include<stdio.h>
int main()
{
    int num,d,n,rev=0;
    printf("enter your number to be reversed:");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
    d=n%10;
    rev=rev*10+d;
    n=n/10;
    }
    printf("your reverse of the number %d is %d",num,rev);
    return 0;
}