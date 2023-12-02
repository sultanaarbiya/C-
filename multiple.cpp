#include<iostream>
using namespace std;

class A
{
protected:
int a=100;
};

class B
{
protected:
   int b=20;
};

class c:public A,public B
{
protected:
int d=5;
public:
void show()
{
cout<<"a is"<<a<<" and b is "<<b<<" d is"<<d<<endl;
}
};

int main()
{
c c1;
c1.show();
return 0;
}
