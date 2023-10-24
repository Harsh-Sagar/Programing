#include<stdio.h>
#include<conio.h>
int main()
{ int a,b;
  system("cls");
   printf("Enter Two Numbers :\n");
   scanf("%d %d",&a,&b);
   char c;
   printf("Enter Operator '+' ,'-' ,'*','/','%':\n");
   scanf(" %c",&c);
   switch(c)
   { case '+':
        printf("Sum = %d",a+b);
        break;
    case '_':
        printf("Diffrence =%d",a-b);
        break;
    case '/':
         printf("Division =%d",a/2);
         break;
    case '*':
        printf("Multiplication =%d",a*b);
        break;
    case '%':
       printf("Reminder =%d",a%b);
       break;
     

   }
return 0;
}