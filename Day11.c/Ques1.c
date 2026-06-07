#include<stdio.h>
int summ(int n1,int n2);
int main()
{
    int num1,num2,sum;
    printf("enter your num1 and num2 value:");
    scanf("%d %d",&num1,&num2);
    sum = summ(num1,num2);
    printf("sum of %d and %d is %d",num1,num2,sum);
    return 0;
}
int summ( int n1, int n2)
{
    int s;
    s=n1+n2;
    return s;
}