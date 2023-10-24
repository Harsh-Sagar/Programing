#include<stdio.h>
int main()
{  float s,h,e,m,cs;
     system("cls");
     printf("Enter marks of \nScience :\nMaths :\nEnglish :\nCS :\nHindi :\n");
     scanf("%f%f%f%f%f",&s,&h,&e,&m,&cs);
      printf("Percentage = %.2f%",((s+h+e+m+cs)*100)/500);
   return 0;  
}