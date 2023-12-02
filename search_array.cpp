#include<iostream>
using namespace std;

int main()
{
    int n,limit;
int arr[n],i,flag=0,key;
cout<<"enter the size of an array:";
cin>>n;
cout<<"enter the elements of an array:";
for(i=0;i<limit;i++)
{
cin>>arr[i];
}
cout<<"enter the element to search";
cin>>key;
for(i=0;i<limit;i++)
{
if(arr[i]==key)
{
flag=1;
}
}
if(flag==1)
{
cout<<key<<" is in the array";
}
else
{
    cout<<key<<"it is not in the array";
}
return 0;
}
