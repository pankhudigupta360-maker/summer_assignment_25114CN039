//program to check if the given strings are anagram strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int c1,c2,flag=0;
    char str1[1000],str2[1000];
    printf("Enter string1 value:");
    fgets(str1,1000,stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter string2 value:");
    fgets(str2,1000,stdin);
    str2[strcspn(str2,"\n")]='\0';
    for(int i=0;str1[i]!='\0';i++)
    {
        c1=0,c2=0;
        char c=str1[i];
        for(int z=0;str1[z]!='\0';z++){
        if(c==str1[z]){
            c1++;
        }
    }
        for(int j=0;str2[j]!=0;j++)
        {
            if(c==str2[j]){
                c2++;
            }
        }
        if(c1!=c2){
          flag=1;
          break;  
        }
    }
    if(flag==0){
        printf("%s and %s are anagram strings",str1,str2);
    }
    else{
        printf("%s and %s are not anagram strings",str1,str2);
    }
    return 0;
}