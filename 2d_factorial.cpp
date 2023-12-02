#include<iostream>
using namespace std;
int main()
{
int i,j,k,fact=1;
int arr1[3][3]={1,2,3,5,7,9,12,15,17};
cout<<"The matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<arr1[i][j];
}
cout<<"\n";
}
cout<<"The factorial of all elements in 2d array are:\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
fact=fact*arr1[i][j];
cout<<"\narr1[i][j]="<<arr1[i][j]<<"\tfact="<<fact;
}

}
return 0;
}
