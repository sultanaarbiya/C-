#include<iostream>
using namespace std;
int main()
{
int i=1,num;
cout<<"enter positive number:";
cin>>num;
while(i<=10)
{
cout<<num<<"*"<<i<<"="<<num*i;
cout<<"\n";
i++;
}
return 0;
}
