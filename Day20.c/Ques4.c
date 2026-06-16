#include<stdio.h>
int main()
{
    int i,j,sum=0;
    printf("Enter the order of matrix1:");
    scanf("%d %d",&i,&j);
    int mat1[i][j];
    printf("Enter elements of the matrix:");
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
    printf("column wise addition:\n");
    for(int a=0;a<j;a++){
        sum=0;
        for(int b=0;b<i;b++){
            sum+=mat1[b][a];
        }
        printf("%d\t",sum);
    }
    return 0;
}