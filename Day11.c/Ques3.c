#include<stdio.h>
void prime(int n);
int main()
{
    int num;
    printf("enter your value of num:");
    scanf("%d",&num);
    prime(num);
    return 0;
}
void prime(int n)
{
    int flag=0;
    if(n<=1)
    {
        printf("not a prime number.");
    }
    else
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    {
    printf("%d is a prime number",n);
    }
    else
    {
    printf("%d is not a prime number",n);
    }
}
}
