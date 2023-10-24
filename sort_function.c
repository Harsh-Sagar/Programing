#include<stdio.h>
int main()
{ int n,k;
 printf("Enter size of the array :\n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter %d elements in array:\n",n);
  for(k=0;k<n;k++)
   scanf("%d",&arr[k]);
  // qsort(arr,n*sizeof(int));
   qsort((void*)arr, sizeof(arr), sizeof(arr[0]));
  for(k=0;k<n;k++)
   printf("%d",arr[k]);
}