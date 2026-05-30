#include<stdio.h>
int main()
{
    int num1,num2,lcm;
    printf("enter your value of num1 and num2:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2&&num1%num2==0)
    {
        lcm=num1;
        printf("lcm of %d and %d id %d",num1,num2,lcm);
    }
    else if(num2>num1&&num2%num1==0)
    {
        lcm=num2;
        printf("lcm od %d and %d is %d",num1,num2,lcm);
    }
    else
    {
    lcm=num1*num2;
    printf("lcm of %d and %d is %d",num1,num2,lcm);
    }
    return 0;
}