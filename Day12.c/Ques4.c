#include<stdio.h>
int perfect(int n);
int main()
{
int num,flag;
printf("enter your value of num:");
scanf("%d",&num);
flag=perfect(num);
if(flag==num){
    printf("%d is a perfect number",num);
}
else{
    printf("%d is not a perfect number",num);
}
return 0;
}
int perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}