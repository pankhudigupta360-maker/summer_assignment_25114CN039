#include<stdio.h>
int main()
{
int num,n,d,product=1;
printf("Enter your number:");
scanf("%d",&num);
n=num;
while(n!=0)
{
    d=n%10;
    product*=d;
    n=n/10;
}
printf("your product of the digits of %d is %d",num,product);
return 0;
}