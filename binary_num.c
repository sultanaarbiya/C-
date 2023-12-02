#include<stdio.h>
int main()
{
int j,num;
printf("enter the num:");
scanf("%d",&num);
while(num>0)
{
j=num%10;
if(j!=0&& j!=1){
printf("given number is not binary");
break;
}
num=num/10;
}
if(num==0)
{
printf("given number is binary");
}
}
