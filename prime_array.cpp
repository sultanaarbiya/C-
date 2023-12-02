#include<iostream>
using namespace std;
 int main()
 {
 int n,count=0,i;
 int a[n];

 cout<<"enter the size of the array:";
 cin>>n;

 cout<<"enter the elements in the array";
 for(i=0;a[i]<n;i++)
 {
 cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
 if(a[i]%i==0)
 {
 count++;
 }
 }
 if(count==2)
 {
 cout<<"a[i]="<<a[i];
 }
 }
