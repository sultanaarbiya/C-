#include<iostream>
using namespace std;
int main()
{
int arr[20];
int x,i,pos,n;
cout<<"enter the limit:";
cin>>n;
cout<<"enter the elements of the array:";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"enter the element and position to be inserted:";
cin>>pos>>x;
n++;
for(i=n-1;i>=pos;i--)
{
arr[i]=arr[i-1];

}
arr[pos-1]=x;
for(i=0;i<n;i++)
{
cout<<"arr[i]="<<arr[i]<<"\t";
}
}
