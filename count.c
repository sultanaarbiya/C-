#include<stdio.h>
int main()
{
int count=0,n;
printf("enter the num:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("the no of digits in a num is %d",count);
return 0;
}
