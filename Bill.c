#include<stdio.h>
int main()
{ float b,c;
   printf("Enter Number of unit :\n");
   scanf("%f",&b);
   if(b>=1&&b<=50)
     {  c=b*0.5;
        printf("Rs=%.2f",c+(c*0.2));
    }
   else if(b>50&&b<=100)
    {  c= 25+((b-50)*0.75);
       printf("%.2f",c);//+(c*0.2));
       
    }
   else if(b>100&&b<251)
      { c=25+37.5+(b-100)*1.2 ;
        printf("%.2f",c+(c*0.2));
        }
    else if(b>250)
    {   c=25+37.5+180+(b-250)*1.5 ;
        printf("%.2f",c+(c*0.2)); }
return 0;
}