#include<iostream>
using namespace std;
int main()
{
int n1=0,n2=1,n3,i=1,limit;
cout<<"enter the given number:";
cin>>limit;
cout<<n1<<"\t"<<n2<<"\t";
while(i<=limit)
{

n3=n1+n2;
cout<<n3<<"\t";
n1=n2;
n2=n3;
i++;
}
return 0;
}
