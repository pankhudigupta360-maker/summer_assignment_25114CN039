#include<stdio.h>
void palm(int n);
int main()
{
    int num;
    printf("enter your value of num:");
    scanf("%d",&num);
    palm(num);
}
void palm(int n)
{
    int d,n1,sol=0;
    n1=n;
    while(n1!=0)
    {
        d=n1%10;
        sol=sol*10+d;
        n1=n1/10;
    }
    if(n==sol){
        printf("%d is a palindrome number",n);
    }
    else{
        printf("%d is not a palindrome number",n);
    }
}