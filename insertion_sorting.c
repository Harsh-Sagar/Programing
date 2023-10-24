#include<stdio.h>
void sort(int n,int *arr)
{ int k,i;
   for(k=0;k<n-1;k++)
  { if(arr[k]>arr[k+1])
     {  for(i=k+1;i>0;i--)
          { if(arr[i]<arr[i-1])
           { int temp=arr[i];
             arr[i]=arr[i-1];
              arr[i-1]=temp;
             }
          }
     }
  
  }
  for(k=0;k<n;k++)
   printf("%d ",arr[k]);
}
int main()
{ int a,k;
system("cls");
  printf("Enter the size of array :\n");
   scanf("%d",&a);
   int arr[a];
   printf("Enter %d elements in array:\n",a);
  for(k=0;k<a;k++)
   scanf("%d",&arr[k]);

sort(a,arr);
 return 0;
}