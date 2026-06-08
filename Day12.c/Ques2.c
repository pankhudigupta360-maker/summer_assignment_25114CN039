#include<stdio.h>
int arm(int n);
int main()
{
    int num,sum;
    printf("enter your value of num:");
    scanf("%d",&num);
    sum=arm(num);
    if(num==sum){
        printf("%d is an armstrong number",num);
    }
    else{
        printf("%d is not a armstrong number",num);
    }
}
int arm(int n)
{
    int d,n1,power,count,sol;
    n1=n;
    count=0;
    power=1;
    sol=0;
    while(n1!=0)
    {
        d=n1%10;
        count++;
        n1=n1/10;
    }
    n1=n;
    while(n1!=0)
    {
        power=1;
        d=n1%10;
        for(int i=1;i<=count;i++){
            power=power*d;
        }
        sol=sol+power;
        n1=n1/10;
    }
    return sol;
}