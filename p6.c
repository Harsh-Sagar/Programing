#include<stdio.h>
int main()
{ long int sal,tax;
system("cls");
  printf("Enter ");
  scanf("%ld",&sal);
  if(sal>250000&&sal<=500000)
    tax=250000*0.005;
 else if(sal>500000&&sal<=1000000)
   tax=(500000*0.2)+12500;
   else if(sal>1000000)
    tax=(1000000*0.3)+100000+12500;
    printf("%ld",tax);
 return 0;
}