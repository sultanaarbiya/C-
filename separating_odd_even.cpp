#include<iostream>
using namespace std;

int main()
{
int a[20],b[20],c[20];
int i=0,j=0,k=0,n;
cout<<"enter the length:";
cin>>n;
cout<<"enter the elements of the array:";
for(i=0;i<n;i++)
{

cin>>a[i];
}
for(i=0;i<n;i++)
{
if(a[i]%2==1)
{
b[j]=a[i];
j++;
}
else
{
c[k]=a[i];
k++;
}
}
cout<<"\nthe odd elements are:";
for(i=0;i<j;i++)
{
cout<<b[i];
}
cout<<"\nthe even elements are:";
for(i=0;i<k;i++)
{
cout<<c[i];
}
}
