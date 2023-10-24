#include<stdio.h>
int main()
{ int a,b;
system("cls");
  printf("Enter the Value of A & B :\n");
scanf("%d %d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("Now Value of A=%d & B=%d",a,b);
 return 0;
}