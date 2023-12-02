#include<iostream>
using namespace std;

class A
{
protected:
int a=10;
};

class B:public A
{
protected:
   int b=20;
public:
 void disp()
 {
 cout<<"a is"<<a<<" "<<"and b is:"<<b<<endl;
 }
};

class c:public B
{
protected:
int d=5;
public:
void show()
{
cout<<"a is and"<<a<<"b is "<<b<<" d is:"<<d<<endl;
}
};

int main()
{
c c1;
c1.show();
return 0;
}
