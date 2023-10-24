#include<stdio.h>
int main()
{ int a,b;
  system("cls");
   printf("Enter the order of the Matrix :\n");
   scanf("%d%d",&a,&b);
   int arr[a][b],k,i,sum=0;
   for(k=0;k<a;k++)
   {  for(i=0;i<b;i++)
      { printf("Enter the value of %dx%d :\n",k+1,i+1);
       scanf("%d",&arr[k] [i]);
      }
   }
    for(k=0;k<a;k++)
    {
        for(i=0;i<b;i++)
        {  if(i==k)
            sum+=arr[k][i];
        }
    }
    printf("Sum of diagonal elements =%d ",sum);
    return 0;
}