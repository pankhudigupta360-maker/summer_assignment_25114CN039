#include<stdio.h>
int main()
{
    int num,d,i,flag=0;
    printf("enter your value for num:");
    scanf("%d",&num);
    i=2;
    d=num/2;
    while(i<=d)
    {
        if(num%i==0)
        {
        flag=1;
        break;
        }
        i++;
    }
    if(flag==0)
    printf("%d is a prime number",num);
    else
    printf("%d is not a prime number",num);
    return 0;
}