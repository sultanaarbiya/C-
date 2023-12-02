#include<iostream>
using namespace std;
int main()
{
int i;
double d;
int &r=i;
double &s=d;
i=5;
cout<<"value of i:"<<i;
cout<<"\nvalue of i reference:"<<r;
d=11.7;
cout<<"\nvalue of d:"<<d;
cout<<"\nvalue of s reference:"<<s;
return 0;
}
