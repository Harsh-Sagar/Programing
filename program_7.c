#include<stdio.h>
int main()
{ int a,b,c;
  system("cls");
   printf("Enter Three Numbers :\n");
   scanf("%d%d%d",&a,&b,&c);
   a=a>b?a:b;
   c=a>c?a:c;
   printf("Greatest is =%d",c);
    return 0;
}