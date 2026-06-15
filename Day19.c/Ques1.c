#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter the order of the matrices:");
    scanf("%d %d",&i,&j);
    int mat1[i][j],mat2[i][j],sum[i][j];
    printf("enter the elements of the matrix1:");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            scanf("%d",&mat1[a][b]);
        }
    }
    printf("Enter the elements of the matrix2:");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            scanf("%d",&mat2[a][b]);
        }
    }
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            sum[a][b]=mat1[a][b]+mat2[a][b];
        }
    }
    printf("Sum of both the matrices:\n");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            printf("%d\t",sum[a][b]);
        }
        printf("\n");
    }
return 0;
}