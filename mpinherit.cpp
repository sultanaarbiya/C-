#include<iostream>
using namespace std;

class A
{
protected:
int a=5;
};
class B
{
protected:
int b=6;
public:
void disp()
{
cout<<" b is:"<<b<<endl;
}
};
class C:public A,public B
{
protected:
int c=10;
public:
void show()
{
cout<<"value of a and b and c is "<<a<<" "<<b<<" "<<c<<endl;
}
};

int main()
{
C c1;
c1.show();
c1.disp();
}
