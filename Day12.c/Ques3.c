#include<stdio.h>
void fibbo(int n);
int main()
{
int num;
printf("enter your value of num:");
scanf("%d",&num);
fibbo(num);
}
void fibbo(int n)
{
int n1,n2,nterm=0;
n1=0;
n2=1;
nterm=n1+n2;
printf("YOUR FIBONACCI SERIES: %d  %d",n1,n2);
for(int i=3;i<=n;i++){
printf("\t%d",nterm);
n1=n2;
n2=nterm;
nterm=n1+n2;
}
}