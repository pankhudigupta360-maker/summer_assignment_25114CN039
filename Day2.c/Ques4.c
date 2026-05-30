#include<stdio.h>
int main()
{
    int num,n,d,rev=0;
    printf("enter your number:");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(num==rev)
    printf("%d is a palindrome number",num);
    else
    printf("%d is not a palimdrome number",num);
    return 0;
}