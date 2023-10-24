#include<stdio.h>
#include<string.h>
int main()
{ char str1[50] ,str2[50];
   system("cls");
  printf("Enter string 1 :\n");
  gets(str1);
  printf("Enter string 2 :\n");
  gets(str2);
  printf(" Length of string 1 : %d\n Length of string 2 : %d\n",strlen(str1),strlen(str2));
  char str3[50];
  strcpy(str3,str1);
  printf("String 1 copy in array 3 : \n%s\n",str3);
  strcpy(str3,str2);
  printf("String 2 copy in array 3 : \n%s\n",str3);
  strcat(str1,str2);
  printf("'strcat' function : %s",str1);
 
 return 0;
}