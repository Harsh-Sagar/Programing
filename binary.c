#include<stdio.h>
#include<math.h>
void sort (int *arr ,int n ,int k)
{ int i,low=0,hig=n-1,mid;
  while(low<=hig)
  { mid=ceil((low+hig)/2);
     if(k==arr[mid])
    { printf("%d is found at %d index  ",k,mid); break;}
     else if(k<arr[mid])
      hig=mid-1;
      else
       low=mid+1;
  }
  if(low>hig)
   printf("%d is not found .\n",k);


  
}
int main()
{ int n,k;
  system("cls");
  printf("Enter number of elements in array :\n");
  scanf("%d",&n);
  printf("Enter %d elements in array:\n",n);
  int arr[n];
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  char ch[3];
  
  do
  {
  printf("Enter Number to be find :\n");
  scanf("%d",&k);
   
    sort(arr,n,k);
   
    printf("\nEnter 'YES' for continue else Enter 'NO'\n");
    scanf("%s",ch);
    
  } while (strcmp(ch,"YES")==0);
  
  
return 0;
}