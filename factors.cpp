#include<iostream>
using namespace std;
int main()
{
int num,i=1;
cout<<"enter the given number:";
cin>>num;
while(i<=num)
{
    i++;
if(num%i==0)
    {
cout<<i<<"\t";
    }
}
return 0;
}
