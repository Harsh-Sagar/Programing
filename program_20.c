//Run on ONLINE compiler

#include<stdio.h>
#include<math.h>
#include<math.h>
int dec(int a)
{ int n=0,num=0;
  
  while(a!=0)
  { printf("%d\n",a);
    if(a%10==1)
     num+=pow(2,n);
     a=a/10;
     n++;
  }
 return num;
}
int bin(int a)
{ int i=1,num=0;
  while(a!=0)
  { int n=a%2;
    a=a/2;
   num+=n*i;
   i*=10;
  }
  return num;
}
int main()
{ int n,num;
  system("cls");
  printf("Enter Numner :\n");
  scanf("%d",&n);
  printf("Convert into 'binary' OR 'decimal' :\n");
  
  char ch[7];
  scanf(" %s",ch);
  fflush;
  if(strcmp(ch,"decimal")==0)
    num= dec(n);
  else if(strcmp(ch,"binary")==0)
    num=  bin(n);
  printf("%d",num);
  return 0;
}