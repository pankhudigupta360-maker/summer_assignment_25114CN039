#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter order of the matrices:");
    scanf("%d %d",&i,&j);
    int mat1[i][j],mat2[i][j],sub[i][j];
    printf("Enter the elements of matrix1:");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            scanf("%d",&mat1[a][b]);
        }
    }
    printf("Enter the elements of matrix2:");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            scanf("%d",&mat2[a][b]);
        }
    }
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            sub[a][b]=mat1[a][b]-mat2[a][b];
        }
    }
    printf("Subtraction of both the matrices:\n");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            printf("%d\t",sub[a][b]);
        }
        printf("\n");
    }
    return 0;
}