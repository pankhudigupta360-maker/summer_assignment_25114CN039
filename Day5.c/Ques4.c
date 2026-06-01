//WAP to find the largest prime factor
#include<stdio.h>
int main()
{
    int num,i,factor,flag,largest=1;
    printf("enter your value of num:");
    scanf("%d",&num);
    if(num<2)
    {
        printf("no prime factors");
    }
    for(i=2;i<=num;i++)
    {
        flag=0;
        if(num%i==0)
        {
        factor=i;
        for(int j=2;j<factor;j++)
        {
        if(factor%j==0)
        {
        flag=1;
        break;
        }
        }
        if(flag==0)
        {
        printf(" primefactors:%d ",factor);
        largest=factor;
        }
        }
    }
    printf(" \nthe biggest prime factor is %d",largest);
    return 0;
}
