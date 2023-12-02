#include<iostream>
using namespace std;
int main()
{
int a,b,gcd,i=1;
cout<<"enter values of a and b:";
cin>>a>>b;
while(i<=a&&i<=b)
{
i++;
if(a%i==0&&b%i==0)
{
gcd=i;

}
}
cout<<"gcd="<<gcd;
}
