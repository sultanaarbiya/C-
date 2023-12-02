#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,2,3,4,5};
int i;
for( i=0;i<5;i++)
{
 cout<<"arr[i]="<<arr[i]<<"\tarr[i]*arr[i]="<<arr[i]*arr[i]<<"\n";
}
arr[i]=arr[i]*arr[i];
return 0;
}
