//ques 3
#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("enter your number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact *= i;
    }
    printf("your factorial for %d is %d",num,fact);
    return 0;
}
