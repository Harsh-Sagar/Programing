#include<stdio.h>
int main()
{ int n,k;
  system("cls");
  printf("Enter the size of array :\n");
  scanf("%d",&n);
  int arr1[n],arr2[n],arr3[n];
  printf("Enter %d nubmbers for array 1:\n",n);

  for(k=0;k<n;k++)
   scanf("%d",&arr1[k]);
  printf("Enter %d nubmbers for array 2:\n",n);

  for(k=0;k<n;k++)
   scanf("%d",&arr2[k]);

   for(k=0;k<n;k++)
    arr3[k]=arr1[k]+arr2[k];
 
for(k=0;k<n;k++)
printf("%d ",arr3[k]);

return 0;
}