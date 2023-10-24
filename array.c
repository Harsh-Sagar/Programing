#include<stdio.h>
#include<string.h>
void del( int *arr , int n,int m)
 { for(int i=0;i<n;i++)
    {if(m==arr[i])
      for(int j=i;j<n;j++)
       arr[j]=arr[j+1];
    }
    for(int i=0;i<n-1;i++)
    printf("%d ",arr[i]);
 }
void ser( int *arr , int n,int m)
 {  int t=0;
    for(int i=0;i<n;i++)
    {if(m==arr[i])
        { t=1;
          break;}
    }
    if(t==1)
    printf("yes %d present in given array :\n",m);
    else
     printf("Number is not present in array\n");
 }

 void ins( int *arr , int n,int m,int k)
 { for(int i=0;i<n;i++)
    {if(i==k)
       { for(int j=n;j>=k;j--)
           arr[j]=arr[j-1];
           arr[k]=m;
            
       }
    }
    for(int i=0;i<n+1;i++)
    printf("%d ",arr[i]);
 }


int main()
{ int n,m,k;
  system("cls");
  printf("Enter size of the array :\n");
  scanf("%d",&n);
  int arr[n+1];
  printf("Enter %d numbers in array :\n",n);
  for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
   char ch[10];
   printf("Enter number:\n");
   scanf("%d",&m);
    printf("Enter operation you want 'Delete'  'Insert' 'Search':\n");
    scanf("%s",ch);
    if(strcmp(ch,"Delete")==0)
     del(arr,n,m);
     else if(strcmp(ch,"Insert")==0)
     { printf("Enter index number :\n");
       scanf("%d",&k);
      ins(arr,n,m,k);
     }
     else if(strcmp(ch,"Search")==0)
     ser(arr,n,m);
     else 
     printf("Wrong operation enter correct :\n");
}