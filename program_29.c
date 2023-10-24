#include<stdio.h>
typedef struct TRAIN_INFO
{  char name[50];
   int num;
  struct a_time
  { int h;
    int m;
  }at;
   struct d_time
  { int h;
    int m;
  }dt;
    

}ti;
//struct TRAIN_INFO st[50];


/*void print (int n)
{for(int k=0;k<n;k++)
    { printf("TRAIN name = %s : \n", st[k].name);
       printf("Train Number %d :\n",st[k].num);
       printf("Arrival Time %d:%d :\n",st[k].at.h,st[k].at.m);
       printf("Depart Time %d:%d :\n",st[k].at.h,st[k].dt.m);
     }
    }*/


int main()
{ int n;
  system("cls");
  printf("Enter Number of train info_:\n");  
  scanf("%d",&n);
  //struct TRAIN_INFO st[n];
   ti st[n];
   for(int k=0;k<n;k++)
    { printf("Enter TRAIN %d data  name :\n",k+1);
      fflush;
      // gets (st[k].name);
       scanf(" %[^\n]s", st[k].name);
       printf("Enter train Number :\n");
       scanf("%d",&st[k].num);
       printf("Enter Arrival Time of the train H M :\n");
       scanf("%d %d",&st[k].at.h,&st[k].at.m);
       
       printf("Enter depart Time of the train H M:\n");
       scanf("%d %d",&st[k].dt.h,&st[k].dt.m);
       
       
    }
    
    for(int k=0;k<n;k++)
    { printf("TRAIN name = %s  \n", st[k].name);
       printf("Train Number %d \n",st[k].num);
       printf("Arrival Time %d:%d \n",st[k].at.h,st[k].at.m);
       printf("Depart Time %d:%d \n",st[k].at.h,st[k].dt.m);
     }
 //print(n);
 return 0;
}