#include<iostream>
using namespace std;
int main()
{
int num,reverse=0;
int rem;
cout<<"enter the value of num:";
cin>>num;
while(num!=0)
{
rem=num%10;
num=num/10;
reverse=reverse*10+rem;
}

cout<<"reverse of n digits are:"<<reverse;
}
