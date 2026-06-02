#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,i,d,binary=0,count=0;
    printf("enter your value of num:");
    scanf("%d",&num);
    n=num;
    if(n==0)
    binary=0;
    else
    {
    while(n>0)
    {
        d=n%2;
        binary=binary+d*round(pow(10,i));
        n=n/2;
        i++;
    }
    }
    printf("%d is the binary number of %d\n",binary,num);
    d=0;
    while(binary>0)
    {
        d=binary%10;
        if(d==1)
        {
            count++;
        }
        binary=binary/10;
    }
    printf("the set bits in %d is %d",num,count);
    return 0;
}