#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter the order of the matrix:");
    scanf("%d %d",&i,&j);
    int mat[i][j],sum=0,sum1=0;
    printf("Enter the elements of the matrix:");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            scanf("%d",&mat[a][b]);
        }
    }
    printf("matrix:\n");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            printf("%d\t",mat[a][b]);
        }
        printf("\n");
    }
    for(a=0;a<i;a++){
        sum+=mat[a][a];
        sum1+=mat[a][i-a-1];
    }
    printf("sum of the diagonal elements of the array is %d\n",sum);
    printf("Sum of the secondary diagonal elements of the array is %d\n",sum1);
    return 0;
}