#include<stdio.h>
int main()
{
    int num1,num2,d,i,gcd;
    printf("enter your num1 and num2 value:");
    scanf("%d %d",&num1,&num2);
    d=(num1>num2?num1:num2);
    for(i=2;i<=d;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
         gcd=i;   
        }
    }
    printf("your gcd of %d and %d is %d",num1,num2,gcd);
    return 0;
}