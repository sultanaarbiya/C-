#include<iostream>
using namespace std;
int main()
{
int num,countnum=0,i=0;
cout<<"enter the num:";
cin>>num;
while(i<=num)
{
i++;
if(num%i==0)
{
countnum++;
}
}
if(countnum==2)
{
cout<<"number is prime";
}
else
{
cout<<"number is not prime";
}
return 0;
}
