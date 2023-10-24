#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int* memory(int n)
{ int *ptr=(int*)malloc(n*sizeof(int));
  return ptr;
}

int main()
{ int n,*ptr;
system("cls");
cout<<"Enter size:\n"<<endl;
cin>>n;
ptr=memory(n);
for(int k=0;k<n;k++)
cin>>ptr[k];
for(int k=0;k<n;k++)
cout<<*ptr++<<" ";
cout<<endl;
sort(ptr,ptr+n);
for(int k=1;k<=n;k++)
cout<<*(ptr-k)<<" ";
return 0;
}