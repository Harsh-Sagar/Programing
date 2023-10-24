#include<iostream>
using namespace std;
void print(int n,int *arr)
{  int i=0;
     while(i<n)
        { printf("%d ",arr[i]);
           i++;
        }
}
void sort(int n,int *arr )
{  int k,i;
  for(k=0;k<n-1;k++)
   for(i=0;i<n-1;i++)
     if(arr[i]>arr[i+1])
      { int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
}
int main()
{ int n,k;
  system("cls");
   printf("Enter Size of array :\n");
   scanf("%d",&n);
   printf("Enter %d elements in array :\n",n);
   int arr[n];
   for(k=0;k<n;k++)
     scanf("%d",&arr[k]);
   
     sort(n,arr);
     print(n,arr);
return 0;
}