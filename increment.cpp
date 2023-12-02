#include<iostream>
using namespace std;
int main()
{
int i=0,j=1,k=2,m;
m=i++||j++||k++;
cout<<"m="<<m<<"\t i="<<i<<"\t j="<<j<<"\t k="<<k;
return 0;
}
