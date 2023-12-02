#include<iostream>
using namespace std;
int main()
{
int num=1;
cout<<"odd numbers from 1 to 100 are:\n";
while(num<=100)
{
if(num%2!=0)
cout<<num;
cout<<"\t";
num++;
}
return 0;
}
