//program to check if the string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],str1[1000];
    printf("Enter your string value:");
    scanf("%999s",str);
    strcpy(str1,str);
    strrev(str1);
    if(strcmp(str1,str)==0){
        printf("%s is a palindrome string.",str);
    }
    else{
        printf("%s is not a palindrome string.",str);
    }
    return 0;
}