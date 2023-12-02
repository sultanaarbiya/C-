#include<iostream>
using namespace std;
int add(int a,int b)
{
return a+b;
}
int add(int a,int b, int c)
{
return a+b+c;
}
int add(int a,int b, int c,int d)
{
return a+b+c+d;
}
int add(int a,int b, int c,int d, int e)
{
return a+b+c+d+e;
}
int main()
{
int a=10,b=20,c=15,d=25;
int s1,s2,s3,s4;

s1=add(a,b);
s2=add(a,b,c);
s3=add(a,b,c,d);
s4=add(a,b,c,d,100);
cout<<"s1="<<s1;
cout<<"\ns2="<<s2;
cout<<"\ns3="<<s3;
cout<<"\ns4="<<s4;
return 0;
}

