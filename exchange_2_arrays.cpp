#include<iostream>
using namespace std;
int main()
{
int i;
int arr1[5]={1,2,3,4,5};
int arr2[5]={6,7};
for(i=0;i<5;i++)
{
arr1[i]=arr1[i]+arr2[i];
arr2[i]=arr1[i]-arr2[i];
arr1[i]=arr1[i]-arr2[i];
}
for(i=0;i<5;i++)
{
  cout<<"\narr1[i]="<<arr1[i]<<"\tarr2[i]"<<arr2[i];
}
return 0;
}
