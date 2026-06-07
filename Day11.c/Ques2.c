#include<stdio.h>
int maxx(int n1,int n2,int n3);
int main()
{
    int num1,num2,num3,max;
    printf("enter your value of num1,num2 and num3:");
    scanf("%d %d %d",&num1,&num2,&num3);
    max= maxx(num1,num2,num3);
    printf("maximum number among %d,%d and %d is %d",num1,num2,num3,max);
    return 0;
}
int maxx(int n1,int n2, int n3)
{
    int m;
    m= (n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3));
    return m;
}