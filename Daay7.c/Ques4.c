#include<stdio.h>
int reverse(int n);
int main()
{
    int num,rev=0;
    printf("enter your value of num:");
    scanf("%d",&num);
    rev=reverse(num);
    printf("the reverse of %d is %d",num,rev);
    return 0;
}
int reverse(int n)
{ 
    static int rev=0;
    if(n==0)
    return rev;
    else 
    rev=rev*10+(n%10);
    return reverse(n/10);
}