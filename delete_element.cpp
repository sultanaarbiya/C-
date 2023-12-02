#include<iostream>
using namespace std;
int main()
{
int a[10];
int i,pos;
cout<<"enter the elements  of the array:";
for(i=0;i<10;i++)
{
cin>>a[i];
}
cout<<"enter the pos to delete:";
cin>>pos;
if(pos>=10+1)
{
cout<<"deletion is not possible";
}
else
{
for(i=pos-1;i<10;i++)
{
a[i]=a[i+1];
}
for(i=0;i<10-1;i++)
{
cout<<a[i];
}
}
}
