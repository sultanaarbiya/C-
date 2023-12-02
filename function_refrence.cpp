#include<iostream>
using namespace std;
int add(int a,int b);

float add(float a,float b);
char add(char a,char b);

int main()
{
int a=10;int b=20,s1;
float x=3.5,y=4.5,z;
char c1='A',c2='B',c3;
s1=add(a,b);
z=add(x,y);
c3=add(c1,c2);

cout<<"s1="<<s1;
cout<<"\nz="<<z;
cout<<"\nc3="<<c3;
return 0;
}

int add(int a,int b)
{
return a+b;
}

char add(char a,char b)
{
return a+b;
}

float add(float a,float b)
{
return a+b;
}
