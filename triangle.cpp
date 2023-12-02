#include<iostream>
using namespace std;
int main()
{
int side1,side2,side3;
cout<<"enter the sides of a triangle:";
cin>>side1>>side2>>side3;
if(side1+side2>side3&&side2+side3>side1&&side1+side3>side2)
{
cout<<"triangle is valid";
}
else
{
cout<<"triangle is not valid";
}
return 0;
}
