#include<stdio.h>
int main()
{ int mon;
system("cls");
 printf("Enter the month :\n");
 scanf("%d",&mon);
 if(mon==2)
  printf("28 days");
else if(mon%2==0)
  printf("30 days");
  else
  printf("31 days");

return 0;
}