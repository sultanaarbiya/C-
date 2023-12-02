#include<iostream>
using namespace std;
int main()
{
int num,i=1,fact=1;
cout<<"enter the given factorial:";
cin>>num;
while(i<=num)
{
fact=fact*i;
i++;
}
cout<<"fact="<<fact<<"\t";
return 0;
}
