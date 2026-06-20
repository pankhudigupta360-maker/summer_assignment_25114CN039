#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,b;
    char str1[1000],str2[1000],temp;
    printf("Enter string1 value:");
    fgets(str1,1000,stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter string2 value:");
    fgets(str2,1000,stdin);
    str2[strcspn(str2,"\n")]='\0';
    i=strlen(str1);
    j=strlen(str2);
    if(i!=j){
        printf("not same string length.");
        return 0;
    }
        for( a=0;a<=j;a++){
       if(strcmp(str1,str2)==0){
        printf("%s is the string rotation of %s",str1,str2);
        return 0;
       }
       temp= str2[0];
       for(b=0;b<j-1;b++){
        str2[b]=str2[b+1];
       }
        str2[j-1]=temp;
       }
    printf("%s is not the string rotation of %s",str2,str1);
    return 0;
}