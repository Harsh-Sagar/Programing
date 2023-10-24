#include<stdio.h>
int main()
{ int n,t=1;
system("cls");
  printf("Enter Number :\n");
  scanf("%d",&n);
  for(int k=2;k<=n/2;k++)
   if(n%k==0)
      { t=0;
        break;}
    if(t==0||n==1)
     printf("%d is Not Prime",n);
    else
      printf("%d is Prime",n);


 return 0;

}