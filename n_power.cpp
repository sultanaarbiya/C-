#include<iostream>
using namespace std;
int main()
{
int base,power,result=1;
cout<<"enter the given base and power:";
cin>>base>>power;
while(power>0)
{
result=base*result;
power--;
}
cout<<"result="<<result<<"\t";
return 0;
}
