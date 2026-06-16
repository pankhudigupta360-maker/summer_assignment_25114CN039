#include<stdio.h>
int main()
{
    int i,j,x,y;
    printf("Enter the order of matrix1:");
    scanf("%d %d",&i,&j);
    printf("Enter the order of matrix2:");
    scanf("%d %d",&x,&y);
    int mat1[i][j],mat2[x][y],mult[i][y];
    printf("Enter the elements of matrix1:");
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            scanf("%d",&mat1[a][b]);
              }
    }
    printf("Enter the elements of matrix2:");
    for(int a=0;a<x;a++){
        for(int b=0;b<y;b++){
            scanf("%d",&mat2[a][b]);
              }
    }
    if(j==x)
    {
        for(int a=0;a<i;a++){
            for(int b=0;b<y;b++){
                mult[a][b]=0;
                for(int c=0;c<j;c++){
                    mult[a][b]+=mat1[a][c]*mat2[c][b];
                }
            }
        }
    }
    else
    {
        printf("Multiplication not possible.");
    }
    printf("multiplication:\n");
    for(int a=0;a<i;a++){
        for(int b=0;b<y;b++){
            printf("%d\t",mult[a][b]);
        }
        printf("\n");
    }
    return 0;
}