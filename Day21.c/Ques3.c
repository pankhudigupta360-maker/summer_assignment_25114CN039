//program to count vowels and consonants in a string.
#include<stdio.h>
int main()
{
    int i=0,vcount=0,count=0;
    char str[100];
    printf("Enter your string value:");
    scanf("%99s",str);
    while(str[i]!=0){
    char c=str[i];
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        vcount++;
    }
    else if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
        count++;
    }
    i++;
}
printf("string: %s\n",str);
printf("total no. of vowel is %d\n",vcount);
printf("total no. of consonant is %d\n",count);
return 0;
}