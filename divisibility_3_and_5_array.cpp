#include<iostream>
using namespace std;

int main()
{
    int i;
    int a[4]={9,12,24,5};

    for(i=0;i<4;i++)
     {
         if(a[i]%3==0&&a[i]%4==0)
         {
      cout<<"a[i]="<<a[i]<<"\t";
         }
     }
      return 0;
}
