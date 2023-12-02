#include<iostream>
using namespace std;
int main()
{
int size;
int  a[20];
int i,j,k;
cout<<"enter the size:";
cin>>size;
cout<<"enter the elements  of the array:";
for(i=0;i<size;i++)
{
cin>>a[i];
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(a[i]==a[j])
{
for(k=j;k<size-1;k++)
{
a[k]=a[k+1];
}
size--;
}
}
j--;
}
for(i=0;i<size;i++)
cout<<a[i];
return 0;
}
