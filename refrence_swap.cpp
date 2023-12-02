#include<iostream>
using namespace std;

void swap(int &x, int &y);
int main()
{
int a=100;int b=200;
cout<<"before swap, value of a:"<<a;
cout<<"\nbefore swap, value of b:"<<b;
swap(a,b);
cout<<"\nafter swap, value of a:"<<a;
cout<<"\nafter swap, value of b:"<<b;
return 0;
}

void swap(int &x,int &y)
{
int temp;
temp=x;
x=y;
y=temp;
}
