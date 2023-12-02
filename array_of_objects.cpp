#include<iostream>
using namespace std;

class launch
{
public:
int a;

void setdata(int n)
{
a=n;
}
void getdata()
{
cout<<a<<endl;
}
};

int main()
{
launch l[4];
int num1;
for(int i=0;i<4;i++)
{
cin>>num1;
l[i].setdata(num1);
}
cout<<"enetered data are:"<<endl;
for(int i=0;i<4;i++)
{
l[i].getdata();
}
return 0;
}
