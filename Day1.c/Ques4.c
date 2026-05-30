// quees 4
#include<stdio.h>
int main()
{
int num,n,count = 0;
printf("enter your value for num");
scanf("%d",&num);
n=num;
while(n!=0)
{
    count++;
    n=n/10;
}
printf("your total number of digits in %d is %d",num,count);
return 0;
}