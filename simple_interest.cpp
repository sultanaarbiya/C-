#include<iostream>
using namespace std;
int main()
{
float principalamount,time;
float rate,SI;
cout<<"enter the amount,time and interest rate:";
cin>>principalamount>>time>>rate;
SI=(principalamount*time*rate)/100;
cout<<"SI="<<SI;
return 0;
}
