#include<stdio.h>
int main()
{ int p,c,m,e,h,t;
  system("cls");
  printf("Enter the marks of 5 Subjects :\n");
  scanf("%d%d%d%d%d",&p,&c,&m,&e,&h);
   t=((p+c+m+e+h)*100)/500;
   if(t>=90&&t<=100)
     printf("%d percentage \nGRADE 'A'",t);
   else if(t<90&&t>=80)
      printf("%d percentage \nGRADE 'B'",t);
    else if(t>=60&&t<80)
      printf("%d percentage \nGRADE 'C'",t);
    else
     printf("%d percentage\nGRADE 'D'",t);

     return 0;
}