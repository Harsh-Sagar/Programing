#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add(int m,int n,int (*arr1)[n],int (*arr2)[n])
{ int k,i,arr[m][n];

   for(k=0;k<m;k++)
    for(i=0;i<n;i++)
    arr[k][i]=arr1[k][i]+arr2[k][i];

    printf("Addition of Matrix 1&2 :\n");
    for(k=0;k<m;k++)
    { for(i=0;i<n;i++)
      { printf(" %d ",arr[k][i]);
      }
      printf("\n");
    }


}
void multiply(int m,int n,int a1[m][n],int a2[m][n])
{ int k,i,mul,sum=0,arr[m][n];
  for(k=0;k<m;k++)
  {  sum=0; 
    for(i=0;i<n;i++)
     { mul=a1[k][i]*a2[i][k];
       sum+=mul;
     } 
     arr[k][i]=sum;
  }

  for(k=0;k<m;k++)
 {  for(i=0;i<n;i++)
   { printf("%d ",arr[k][i]);

   } printf("\n");}
}

int main()
{ int m,n;
  system("cls");
  //printf("'NOTE'\nFor Addition of two matrix both matrix should have same order .");
  printf("Enter Order of the matrix :\n");
  scanf("%d%d",&m,&n);
  int arr1[m][n],arr2[m][n],k,i;
  printf("Enter the value of MATRIX 1:\n");
  for(k=0;k<m;k++)
  for(i=0;i<n;i++)
     {  printf("Enter the value of %dx%d\n",k+1,i+1);
        scanf("%d",&arr1[k][i]);
     }
printf("Enter the value of MATRIX 2:\n");
for(k=0;k<m;k++)
  for(i=0;i<n;i++)
     {  printf("Enter the value of %dx%d\n",k+1,i+1);
        scanf("%d",&arr2[k][i]);
     }

 char ch[8];
 printf("What you want 'add' , 'multiply' , 'both' :\n");
 scanf(" %s",ch);
  fflush;
 if(strcmp(ch,"add")==0)
   add(m,n,arr1,arr2);
else if(strcmp(ch,"multiply")==0)
   multiply(m,n,arr1,arr2);
else if(strcmp(ch,"both")==0)
{   add(m,n,arr1,arr2);
    multiply(m,n,arr1,arr2);
}
else
 printf("Enter correct input :\n");

 return 0;
}