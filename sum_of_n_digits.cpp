#include<iostream>
using namespace std;
int main()
{
int num,sum=0;
int rem;
cout<<"enter the value of num:";
cin>>num;
while(num!=0)
{
rem=num%10;
num=num/10;
sum=sum+rem;
}

cout<<"sum of n digits are:"<<sum;
}
