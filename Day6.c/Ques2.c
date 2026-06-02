#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,d,i=0,decimal=0;
    printf("enter your value of num:");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        d=n%10;
        decimal=decimal+d*round(pow(2,i));
        n=n/10;
        i++;
    }
    printf(" %d is the decimal number of %d",decimal,num);
    return 0;
}