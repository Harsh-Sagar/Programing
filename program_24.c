#include<stdio.h>
void linear_search(int *a,int n,int x)
{  int t=-1;
    for(int k=0;k<n;k++)
   { if(a[k]==x)
        { t=1;
          break;
        }
   }
   if(t==1)
   printf("Yes %d is present in array ",x);
   else
   printf("No %d is not present in array ",x);
}
int main()
{ int n,x;
  system("cls");
  printf("Enter SIZE of array :\n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d values in array :\n",n);
  for(int k=0;k<n;k++)
    scanf("%d",&arr[k]);
    printf("Enter value for finding :\n");
    scanf("%d",&x);
    linear_search(arr,n,x);

    return 0;
}