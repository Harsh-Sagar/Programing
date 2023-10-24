#include<stdio.h>
int main()
{ int n,sum=0;
system("cls");
  printf("Enter Number :\n");
  scanf("%d",&n);
  while(n!=0)
  { sum+=n%10;
    n=n/10; }
    printf("Sum of the digit is %d",sum);
    return 0;
}