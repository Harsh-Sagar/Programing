#include<stdio.h>
int main()
{ int a,b;
system("cls");
   printf("Enter the values of 'A'&'B'\n");
   scanf("%d%d",&a,&b);
   
   int *c,*d,e;
   c=&a;  d=&b;
   e=b;
   *d=*c;
   *c=e;
   printf("a=%d\nb=%d",a,b);
   return 0;
}