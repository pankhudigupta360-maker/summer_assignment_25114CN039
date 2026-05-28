// ques 1
#include<stdio.h>
int main()
{
 int num,i,sum=0;
 printf("enter your num value:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
    sum +=i;
 }
 printf("the sum of first %d natural number is%d",num,sum );
 return 0;
}