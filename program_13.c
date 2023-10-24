#include<stdio.h>
int main()
{  int n,fact=1;
system("cls");
  printf("Enter number to find factorial :\n");
  scanf("%d",&n);
    for(int k=1;k<=n;k++)
     fact*=k;
     printf("Factorial of %d is %d",n,fact);
    return 0;
}