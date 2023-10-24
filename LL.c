#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int roll;
    char name[30];
    struct node *next;
}st;
int* create_node()
{struct node *nex ;
     nex= (struct node*)malloc(sizeof(st));
     return nex;
}
void print(int n)
{ for(int i=0;i<n;i++)
   printf("%d",st.roll);
   printf("%s",st.name);
}
int main()
{   struct node *head,*temp;
  int n;
  printf("Enter the number of member :\n");
   scanf("%d",&n);
  for(int i=0;i<n;i++)
   { temp=create_node();
      if(i==0)
       head=temp;
       else
        st.next=temp;
        printf("Enter Data :\n");
        printf("Enter I'D : ");
        scanf("%d",&st);
   }

    return 0;
}