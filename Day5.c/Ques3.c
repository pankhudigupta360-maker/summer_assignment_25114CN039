//WAP to print the factors of a number
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter your value of num:");
    scanf("%d",&num);
    printf("the factors of %d are:",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        printf("\t%d",i);

    }
    return 0;
}