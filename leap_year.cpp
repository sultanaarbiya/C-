#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter any number:";
cin>>num;
if((num%4==0)&&(num%100!=0)||(num%400==0))
{
cout<<" given year is a leap year ";
}
else
{
cout<<"given year is not a leap year";
}
}
