#include<stdio.h>
int main()
{ int n,sum=0;
  system("cls");
  printf("Enter Number to find sum of all number till given number:\n");
  scanf("%d",&n);
  for(int k=1;k<=n;k++)
    sum+=k;
    printf("Sum = %d",sum);
    
    return 0;
}