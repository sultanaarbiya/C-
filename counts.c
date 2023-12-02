#include<stdio.h>
int main()
{
int count=0;
char s[20];
char *ptr=s;
gets(s);
while(*ptr!='\0')
{
count++;
ptr++;
}
printf("the number of characters in a given string:%d",count);
return 0;
}
