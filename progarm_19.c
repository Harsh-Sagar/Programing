// Wrong output on vs code but correct on other compiler
#include<stdio.h>
#include<math.h>
int main()
{ int i,n,len=0,ran,sum=0;
  system("cls");
  printf("Enter Range starting to last :\n");
  scanf("%d%d",&i,&n);
  for(i;i<=n;i++)
  { ran=i;
    len=0;
    sum=0;
    while(ran!=0)
    { len++;
       ran=ran/10;
    }
    ran=i;
    int x;
    while(ran!=0)
    { x=ran%10;
    sum+=pow(x,len);
      ran=ran/10;
      
    }
   
  if(i==sum)
 printf("%d ",i);
  }

}