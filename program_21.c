#include<stdio.h>
int main()
{ int n,sum=0;
system("cls");
  printf("Enter SIZE of array :\n");
  scanf("%d",&n);
  printf("Enter %d numbers :\n");
  int arr[n];
  for(int i=0;i<n;i++)
   {scanf("%d",&arr[i]);
       sum+=arr[i];}
       printf("Sum =%d",sum);

return 0;
}