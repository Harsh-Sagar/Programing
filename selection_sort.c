#include<stdio.h>
void selection_sort(int n,int *arr)
{ int k,i;
  for(k=n-2;k>0;k--)
   for(i=0;i<k;i++)
     { if(arr[i]>arr[i+1])
         { int temp=arr[i+1];
              arr[i+1]=arr[i];
              arr[i]=temp;
         }
     }

     for(k=0;k<n;k++)
     printf("%d ",arr[k]);
     }


int main()
{ int n;
 system("cls");
 printf("Enter the size of array :\n");
 scanf("%d",&n);
 int k,arr[n];
 printf("Enter %d elements in array :\n",n);
 for(k=0;k<n;k++)
   scanf("%d",&arr[k]);

   selection_sort(n,arr);
 
 return 0;
}