#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter the orde of the matrix:");
    scanf("%d %d",&i,&j);
    int mat[i][j],mat1[i][j];
    printf("Enter the elements of matrix:");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            scanf("%d",&mat[a][b]);
        }
    }
    printf("Matrix before transpose:\n");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            printf("%d\t",mat[a][b]);
        }
        printf("\n");
    }
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            mat1[b][a]=mat[a][b];
        }
    }
    printf("Matrix after transpose:\n");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            printf("%d\t",mat1[a][b]);
        }
        printf("\n");
    }
}