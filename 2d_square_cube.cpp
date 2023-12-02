#include<iostream>
using namespace std;
int main()
{
int i,j,square=1,cube=1;
int arr1[3][3]={2,3,4,5,6,7,8,9};
cout<<"The matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<arr1[i][j];
}
cout<<"\n";
}
cout<<"The square and cube of each element in 2d array is:\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
square=arr1[i][j]*arr1[i][j];
cube=arr1[i][j]*arr1[i][j]*arr1[i][j];
{
cout<<"\tarr1[i][j]="<<arr1[i][j]<<"\nsquare="<<square;
cout<<"\tarr1[i][j]="<<arr1[i][j]<<"\ncube="<<cube;
}
}
}
return 0;
}
