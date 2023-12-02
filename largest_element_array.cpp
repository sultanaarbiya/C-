#include<iostream>
using namespace std;
int main()
{
int i;

int arr1[5]={1,2,6,4,3};
int largest=arr1[0];
int smallest=arr1[0];
for(i=0;i<5;i++)
{
if(arr1[i]>largest)
{
largest=arr1[i];
}
}
cout<<"largest="<<largest;
for(i=0;i<5;i++)
{
if(arr1[i]<smallest)
{
smallest=arr1[i];
}
}
cout<<"\nsmallest="<<smallest;
return 0;

}
