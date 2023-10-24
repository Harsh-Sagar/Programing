#include<stdio.h>
int main()
{ char a;
system("cls");
printf("Enter input :\n");
scanf(" %c",&a);
if(a>=65&&a<=90)
  printf("%c is upper case:\n",a);
else if(a>=90&&a<=122)
 printf("%c is in lowe case:\n",a);
 else if(a>=48&&a<=57)
 printf("%c is in integer:\n",a);
 else
 printf("%c is spcial character :\n",a);

 return 0;
}