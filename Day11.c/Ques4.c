#include<stdio.h>
int fact(int i);
int main()
{
    int num,factorial;
    printf("enter your value for num:");
    scanf("%d",&num);
    factorial= fact(num);
    printf("%d is the factorial of %d",factorial,num);
    return 0;
}
int fact(int n)
{
    int i,sol=1;
    for(i=1;i<=n;i++){
        sol*=i;
    }
    return sol;
}