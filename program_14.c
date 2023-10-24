#include<stdio.h>
int main()
{ int n,even=0,odd=1;
  system("cls");
  printf("Enter last term :\n");
scanf("%d",&n);
 for(int k=2;k<=n;k++)
  if(k%2==0)
    even+=k;
  else
    odd+=k;
  printf("Sum of EVEN numbers = %d\nSum of Odd numbers =%d",even,odd);
    return 0;
}