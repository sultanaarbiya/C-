#include<iostream>
using namespace std;

class launch
{
private:
int num;
public:
launch()
{
num=300;
cout<<"inside zero parameterized constructor"<<endl;
}
launch(int n)
{
num=n;
cout<<"inside parameterized constructor"<<endl;
}

void disp()
{
cout<<num<<endl;
}
};
int main()
{
launch l(20);
l.disp();
launch l1;
l1.disp();
}
