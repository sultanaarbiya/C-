#include<iostream>
using namespace std;
int main()
{
int i,j;
int arr1[3][3]={1,3,5,7,9,11,13,15,17};
int arr2[3][3]={2,4,6,8,10,12,14,16,18};
int *ptr1,*ptr2;
ptr1=&arr1[0];
ptr2=&arr2[0];
printf("The matrix1 is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<ptr1[i]+j;
}
cout<<"\n";
}
printf("The matrix2 is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<ptr2[i]+j;
}
cout<<"\n";
}
cout<<"addition of the matrices are:\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<ptr1[i]+j<<ptr2[i]+j<<ptr1[i]+j<<ptr2[i]+j;
cout<<"\n";
}
}
return 0;
}
