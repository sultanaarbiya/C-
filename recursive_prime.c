#include<stdio.h>
int prime();
int main()
{
int i=2,num;
printf("enter a num to check for prime:");
scanf("%d",&num);
if(prime(i,num)==0)
{
printf("%d is a prime number",num);
}
else
{
printf("%d is not a prime number",num);
}
}

int prime(int i, int num)
{
if(num==i)
{
return 0;
}
else if(num%i==0)
{
return 1;
}
else
{
return prime(i+1,num);
}
}
