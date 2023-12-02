#include<iostream>
using namespace std;
int main()
{
int num,remainder,palindrome=0,temp;
cout<<"enter the given number:";
cin>>num;
temp=num;
while(num!=0)
{
remainder=num%10;
palindrome=palindrome*10+remainder;
num=num/10;
}
if(temp==palindrome)
{
cout<<"given number is a palindrome";
}
else
{
cout<<"given number is not an palindrome number";
}
cout<<"\npalindrome="<<palindrome;
return 0;
}
