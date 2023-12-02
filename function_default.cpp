#include<iostream>
using namespace std;

int add(int a=30,int b=2, int c=3)
{
return a+b+c;
}
int main()
{
int a=10,b=20,c=15,d=25;
int s1,s2,s3,s4;

s1=add();
s2=add(a);
s3=add(a,b);
s4=add(c);
cout<<"s1="<<s1;
cout<<"\ns2="<<s2;
cout<<"\ns3="<<s3;
cout<<"\ns4="<<s4;
return 0;
}

