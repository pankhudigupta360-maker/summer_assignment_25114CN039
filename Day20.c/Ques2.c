#include<stdio.h>
int main()
{
    int i,j,flag;
    printf("enter the order of the matrix:");
    scanf("%d %d",&i,&j);
    int mat1[i][j];
    printf("Enter the elements of matrix:");
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            scanf("%d",&mat1[a][b]);

        }
    }
    //square matrix test
    if(i==j){
        flag=0;
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            if(mat1[a][b]!=mat1[b][a]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("matrix is symmetric.");
    }
    else{
        printf("matrix is not symmetric.");
    }
}
else{
    printf("Non Square are not symmetric.");
}
    return 0;
}