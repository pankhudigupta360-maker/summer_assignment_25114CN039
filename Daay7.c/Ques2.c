#include<stdio.h>
int fibbo(int n);
int main()
{
    int num,fib;
    printf("enter your value of num:");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        fib= fibbo(i);
        printf("%d\t",fib);
    }
    return 0;
}
    int fibbo(int n)
    {
      if(n==0)
      return 0;
      else if(n==1)
      return 1; 
      else 
      return fibbo(n-2)+fibbo(n-1); 
    }

