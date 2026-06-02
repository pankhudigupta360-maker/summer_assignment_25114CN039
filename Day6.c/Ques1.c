#include<stdio.h>
#include<math.h>
int main()
{
    int num,d,n,i=0,binary=0;
    printf("enter your number:");
    scanf("%d",&num);
    n=num;
    if(n==0)
    printf("binary number is 0");
    else{
    while(n>0)
    {
    d=n%2;
    binary=binary+d*round(pow(10,i));
    n=n/2;
    i++;
    }
    printf("%d is the binary number of %d",binary,num);
    }
    return 0;
}