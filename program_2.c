#include<stdio.h>
#include<math.h>
int main()
{ float pri,rate,time;
   system("cls");
   printf("Enter the Principle :\n");
   scanf("%f",&pri);
   printf("Enter the Rate :\n");
   scanf("%f",&rate);
   printf("Enter Time:\n");
   scanf("%f",&time);
   float CI,SI,x;
   SI=(pri*rate*time)/100;
   CI=pri*pow(1+rate/100,time)-pri;
  printf("Simple Inrest=%.2f\nCompound Intrest=%.2f",SI,CI);
  
  return 0;
}