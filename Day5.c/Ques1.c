//WAP a program to check perfect number.
#include<stdio.h>
int main()
{
int num,n,div,sum=0;
printf("enter your value of num:");
scanf("%d",&num);
n=num;
for(int i=1;i<n;i++)
{
    if(n%i==0)
    {
        div=i;
        sum+=div;
    }
}
if(sum==num)
printf("%d is a perfect number",num);
else
printf("%d is not a perfect number",num);
return 0;
}