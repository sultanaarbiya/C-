#include<iostream>
using namespace std;
int main()
{
int i,j;
int arr1[3][3]={1,3,5,7,9,11,13,15,17};
//int arr2[3][3]={2,4,6,8,10,12,14,16,18};
cout<<"The matrix1 is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"\tarr1[i][j]="<<arr1[i][j];
}
cout<<"\n";
}

cout<<"Transpose of the matrix is:\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"\tarr1[j][i]="<<arr1[j][i];
}
cout<<"\n";
}
return 0;
}
