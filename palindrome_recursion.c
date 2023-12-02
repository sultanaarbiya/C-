#include<stdio.h>
int reverse(int num);
int ispalindrome(int num);

int main()
{
int num;
printf("enter a number to check whether a number is palindrome or not: ");
scanf("%d",&num);
if(ispalindrome(num)==1)
{
printf("given number is a palindrome number");
}
else
{
printf("given number is not a palindrome number");
}
}

int ispalindrome(int num)
{
if(num==reverse(num))
{
return 1;
}
else
return 0;
}

int reverse(int num)
{
int rem;
static int sum=0;
if(num!=0)
{
rem=num%10;
sum=sum*10+rem;
reverse(num/10);
}
else
 return sum;
}

