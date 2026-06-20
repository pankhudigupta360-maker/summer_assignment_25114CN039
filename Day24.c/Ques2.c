//program to compress a string.
#include<stdio.h>
#include<string.h>
int main()
{
    int count;
    char str[1000];
    printf("Enter string value:");
    fgets(str,1000,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=strlen(str);
    for(int a=0;a<i;a++){
        count=1;
        char c= str[a];
        while(a+count<i&&str[a+count]==c){
                count++;
            }
        if(count==1){
            printf("%c",c);
        }
        else{
            printf("%c%d",c,count);
        }
        a=a+count-1;
    }
    return 0;
}