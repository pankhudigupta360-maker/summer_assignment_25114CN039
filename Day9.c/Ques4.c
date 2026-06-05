#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<10;i++){
    for(j=1;j<=5;j++){
        if(i==1||i==9)
        printf("*");
        else if((i==3||i==5||i==7)&&(j==1||j==5))
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}