#include<stdio.h>
int main()
{
    int i,term1,term2,nextterm,n;
    printf("enter your value for n:");
    scanf("%d",&n);
    term1=0;
    term2=1;
    nextterm=term1+term2;
    printf("YOUR FIBONACCI SERIES IS: 0 1");
    for(i=3;i<n;i++)
    {
        printf("\t%d",nextterm);
        term1=term2;
        term2=nextterm;
        nextterm=term1+term2;
    } 
    printf("\nthe nth term for the fibonacci series till term %d is %d",n,nextterm);
    return 0;  
}
// int datatype is preferred till 47th term in the series!
//for 92nd term long long int datatype is used.