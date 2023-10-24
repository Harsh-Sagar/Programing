#include<stdio.h>
int fact(int n)
{ int num=1;
  if(n==0)
   return 1;
   return(n*fact(n-1));
}
int main()
{ int n;
system("cls");
  printf("enter :\n");
  scanf("%d",&n);
  printf("%d",fact(n));

}