//program to write first repeating characters.
#include<stdio.h>
#include<string.h>
int main()
{
    int count;
    char str[1000],c;
    printf("Enter string value:");
    fgets(str,1000,stdin);
    printf("first repeating characters in string:");
    for(int i=0;str[i]!='\0';i++){
        c=str[i];
        count=0;
        for(int j=0;str[j]!=0;j++){
            if(c==str[j]){
                count++;
            }
        }
        //use of strchr--  int a=strchr(str,c)-str;
        char temp[2]={c,'\0'};
        int a=strcspn(str,temp);
        if(count>1&&i==a){
            printf("%c",c);
        }
    }
    return 0;
}