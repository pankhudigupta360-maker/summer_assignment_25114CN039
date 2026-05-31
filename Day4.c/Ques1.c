#include<stdio.h>
int main()
{
int term1,term2,nextterm,n;
printf("enter the nth value for the fibonnaci series:");
scanf("%d",&n);
term1=0;
term2=1;
nextterm=term1+term2;
printf("the fibonacci series is : 0     1");
for(int i=3;i<n;i++)
{
printf("\t%d",nextterm);
term1=term2;
term2=nextterm;
nextterm=term1+term2;
}
return 0;
}
