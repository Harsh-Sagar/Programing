#include<stdio.h>
int main()
{  system("cls");
    int n,a=1,b=1,c=0;
   
   printf("Enter N'th Term :\n");
   scanf("%d",&n);
   while(n--)
   { printf(" %d",a);
      c=b+a;
      a=b;
      b=c;
       }
    return 0;
}