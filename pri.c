#include<stdio.h>
int main()
{ int n,sum=0;
  system("cls");
  printf("Enter size:\n");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
   { scanf("%d",&arr[i]);
     // sum+=arr[i];
   }
   for(int i=0;i<n;i++)
   { 
     sum+=arr[i];
   }
  printf("Sum of numbers =%d",sum);
}