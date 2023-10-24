#include<iostream>
using namespace std;
void sort(int n,int *arr)
{ int k,i;
   for(k=n-1;k>=0;k--)
    for(i=0;i<k;i++)
    if(arr[i]>arr[i+1])
     { int temp=arr[i+1];
       arr[i+1]=arr[i];
        arr[i]=temp;
     }

}
void print(int n,int *arr)
{ for(int k=0;k<n;k++)
    printf("%d ",arr[k]);
}

int main()
{ system("cls");
  int n;
  printf("Enter the length of the array :\n");
  cin>>n;
  int arr[n];
  for(int k=0;k<n;k++)
    cin>>arr[k];
    
    sort(n,arr);
    print(n,arr);

}