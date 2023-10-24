#include<stdio.h>
int main()
{ int date,mon,day=0;
system("cls");
  printf("Enter date and month :\n");
  scanf("%d %d",&date,&mon);
  for(int k=1;k<=mon;k++)
  {if(mon==k)
       day+=date;
   else if(k==2)
   day+=28;
  else if(k%2==0)
  day+=30;
  else 
  day+=31;
  } printf("%d Days",day);

return 0;
}