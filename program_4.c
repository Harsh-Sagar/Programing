#include<stdio.h>
int main()
{ float temp;
  system("cls");
  printf("Enter TEMPRATURE in C :\n");
  scanf("%f",&temp);
  float f1;
  //f1= (temp*9)/5+32;
  printf("Temperature in Fahrenheit : %.2fF",(temp*9)/5+32);
    
    return 0;
}
