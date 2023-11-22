#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

const char pass[]= "0123456789"
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                   "!@#$%^&*()-_";


int str_len = sizeof(pass) - 1;

int main()
{
int n;
cout<<"Enter pass length: ";
cin>>n;
srand(time(0));
cout<<"Generate Password: ";
for(int i=0; i<n; i++)
{
cout<<pass[rand() % str_len];
}
cout<<endl;
return 0;
}
