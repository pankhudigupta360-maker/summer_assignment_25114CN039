#include<stdio.h>
int main()
{
    int n,d,num,power,count,sum;
    printf("ener your value of n:");
    scanf("%d",&n);
    printf("your armstrong numbers till %d are:",n);
    for(int i=0;i<=n;i++)
    {
        num=i;
        count=0;
        sum=0;
        while(num!=0)
        {
            count++;
            num=num/10;
        }
        num=i;
        while(num!=0)
        {
            power =1;
            d=num%10;
            for(int m=0;m<count;m++)
            {
                power=power*d;
            }
            sum+=power;
            num=num/10;
        }
        if(sum==i)
        {
            printf("  %d",i);
        }
    }
    return 0;
}
