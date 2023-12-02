#include<iostream>
using namespace std;
int main()
{
int num,rem,armstrong=0,temp;
cout<<"enter the given number:";
cin>>num;
temp=num;
while(num!=0)
{
rem=num%10;
armstrong=(rem*rem*rem)+armstrong;
num=num/10;
}
if(temp==armstrong)
{
cout<<"given number is a armstrong";
}
else
{
cout<<"given number is not an armstrong number";
}
cout<<"\narmstrong="<<armstrong;
return 0;
}
