// ques 2
#include<stdio.h>
int main()
{
 int num,n,i,multiply=1;
 printf("enter your number:");
 scanf("%dd",&num);
 printf("enter the number till which multples has to be written:");
 scanf("%d",&n);
 printf("your multiplication table for %d is:",num);
 for(i=1;i<=n;i++)
 {
    multiply = num*i;
    printf("%d*%d is %d",num,i,multiply);
 }
    return 0;
}