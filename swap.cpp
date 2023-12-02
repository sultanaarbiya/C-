#include<iostream>
using namespace std;
main()
{
int a,b,temp;
cout<<"enter the values of a and b:";
cin>>a>>b;
cout<<"\n before swapping a and b are:"<<a<<" "<<b;
temp=a;
a=b;
b=temp;
cout<<"\nAfter swapping a and b are %d:"<<a<<" "<<b;
}
