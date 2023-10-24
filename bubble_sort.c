#include<stdio.h>


void bubble_sort(int n, int *arr)
{   int k,i;
    for(k=0;k<n-1;k++)
      for(i=0;i<n-1;i++)
         {  if(arr[i]>arr[i+1])
             { int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    

 for(k=0;k<n;k++)
   printf("%d ",arr[k]);
}
int main()
{ int a,k;
system("cls");
  printf("enter the size of array :\n");
  scanf("%d",&a);
  int arr[a];
  printf("Enter %d elements in array :\n",a);
   for(k=0;k<a;k++)
   scanf("%d",&arr[k]);
   bubble_sort(a,arr);
    printf("\n");
       for(k=0;k<a;k++)
       printf(" %d",arr[k]);
 return 0;
}