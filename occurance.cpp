#include<iostream>
using namespace std;
int main()
{
int size;
int  a[20];
int i,j,k,occurance=0,num;
cout<<"enter the size:";
cin>>size;
cout<<"enter the elements  of the array:";
for(i=0;i<size;i++)
{
cin>>a[i];
}
cout<<"enter the element to check:";
cin>>num;
for(i=0;i<size;i++)
{
    if(a[i]==num)
    {
    occurance++;
    }
}
for(i=0;i<size;i++);
cout<<"a[i]="<<a[i]<<"\noccurance="<<occurance;

return 0;
}
