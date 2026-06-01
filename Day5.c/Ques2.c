//WAP to check strong number
#include<stdio.h>
int main()
{
    int num,n,d,sum=0,fact;
    printf("enter your value of num:");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        d=n%10;
        fact=1;
        for(int i=1;i<=d;i++)
        {
            fact=fact*i;
        }
        sum+=fact;
        n=n/10;
    }
    if(num==sum)
    printf("%d is a strong number",num);
    else
    printf("%d is not a strong number",num);
    return 0;
}