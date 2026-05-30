#include <stdio.h>
int main()
{
    int num,n,i,k,flag;
    printf("enter your range of number for checking prime number:");
    scanf("%d",&n);
    printf("your prime numbers are: ");
    for(i=2;i<=n;i++)
    {
        num=i;
        flag=0;
        for(k=2;k<=num/2;k++)
        {
            if(num%k==0)
            {
                flag=1;
                break;
            }
        }
            if(flag==0)
            {
            printf("%d\t",num);
            }
    } 
    return 0;
}