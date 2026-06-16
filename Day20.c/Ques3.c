#include<stdio.h>
int main()
{
int i,j,sum;
printf("Enter order of matrix:");
scanf("%d %d",&i,&j);
int mat1[i][j];
printf("enter elements of matrix:");
for(int a=0;a<i;a++){
    for(int b=0;b<j;b++){
        scanf("%d",&mat1[a][b]);
    }
}
printf("matrix:\n");
for(int a=0;a<i;a++){
    for(int b=0;b<j;b++){
        printf("%d\t",mat1[a][b]);
    }
    printf("\n");
}
printf("row wise sum of elements:");
for(int a=0;a<i;a++){
    sum=0;
    for(int b=0;b<j;b++){
        sum+=mat1[a][b];
    }
    printf("%d\t",sum);
}
return 0;
}