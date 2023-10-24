#include<iostream>
using namespace std;
int main()
{ int n,*l,k;
  system("cls");
  
  cout<<"Enter SIZE :\n";
  cin>>n;
  l=(int*)malloc(sizeof(int)*n);
  for(k=0;k<n;k++)
   {cin>>l[k];}

    for(k=0;k<n;k++)
   {cout<<l[k]<<endl;}
return 1;
}