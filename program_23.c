#include<stdio.h>
int main()
{ int n,max,min;
 system("cls");
  printf("Enter size of array :\n");
  scanf("%d",&n);
   int arr[n];
  printf("Enter %d numbers in array:\n",n);
  for(int k=0;k<n;k++)
   scanf("%d",&arr[k]);
   max=arr[0];
   min=arr[0];
   for(int k=0;k<n;k++)
   { if(min>arr[k])
        min=arr[k];
      if(max<arr[k])
        max=arr[k];
    }
printf("Maximum Element =%d\nMinimum Element =%d",max,min);

return 0;
}