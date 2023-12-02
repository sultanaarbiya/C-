#include<stdio.h>
int main()
{
int arr[10],num,i,j;
printf("convert the decimal number to the binary number:\n");
printf("enter the number to convert:\n");
scanf("%d",&num);
for(i=0;num>0;i++)//ex:25 is greater than 0
{
arr[i]=num%2;//arr[0]=25%2=1 // arr[1]=12%2=0 // arr[2]=6%2=0 // arr[3]=3%2=1
num=num/2;// 25/2=12    // 12/2=6 // 6/2=3 // 3/3=1
}
for(j=i-1;j>=0;j--)
{
printf("%d",arr[j]);//11001
}
return 0;
}
