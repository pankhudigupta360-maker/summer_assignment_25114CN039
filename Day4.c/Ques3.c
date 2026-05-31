#include<stdio.h>
int main()
{
    int num,n,d,power,count=0,sum=0;
    printf("enter your value of num:");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        count++;
        n=n/10;

    }
    n=num;
    while(n!=0)
    {
        d=n%10;
        power=1;
        for(int m=0;m<count;m++)
        {
            power=power*d;
        }
        sum+=power;
        n=n/10;
    }
    if(num==sum)
    {
        printf("%d is an armstrong number",num);
    }
    else
    {
        printf("%d is not a armstrong number",num);
    }
    return 0;
}