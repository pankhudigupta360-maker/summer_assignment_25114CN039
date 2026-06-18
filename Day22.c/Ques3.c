//program to check frequency of a character in a line.
#include<stdio.h>
#include<string.h>
int main()
{
  int count=0;
  char str[1000],c;
  printf("Enter string value:");
  fgets(str,1000,stdin);
  printf("Enter the character whose frequency has to be checked:");
  scanf("%c",&c);
  str[strcspn(str,"\n")]='\0';
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]==c){
        count++;
    }
  }  
  printf("Frequency of %c is %d times in %s",c,count,str);
  return 0;
}