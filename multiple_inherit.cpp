#include<iostream>
using namespace std;

class A
{
protected:
int a=100;
public:
void disp()
{
cout<<a<<endl;
}
};

class B
{
protected:
   int b=20;
   public:
   void disp1()
   {
   cout<<b<<endl;
   }
};

class c:public A,public B
{
public:
void show()
{
A::disp();
}
};

int main()
{
c c1;
c1.show();
return 0;
}
