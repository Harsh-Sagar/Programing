#include<stdio.h>

int main()
{ int n; system("cls");
  printf("Enter Number :\n");
  scanf("%d",&n);
  n%2==0?printf("%d is even",n):printf("%d is odd",n);
return 0;
}