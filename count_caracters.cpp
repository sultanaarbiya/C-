#include<iostream>
using namespace std;
int main()
{
char ch;
int num_char=0;
cout<<"enter a name:";
while((ch=getchar())!='\n');
{
num_char++;
}
cout<<num_char;
return 0;
}
