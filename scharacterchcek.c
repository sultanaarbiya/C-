#include<stdio.h>
int main()
{
int uppercase=0,lowercase=0;
char s[20];
char *ptr=s;
gets(s);
while(*ptr!='\0')
{
if(*ptr>='A'&&*ptr<='Z')
{
uppercase++;}
else if(*ptr>='a'&&*ptr<='z')
{
lowercase++;
}
ptr++;
}
printf("the number of characters in a uppercase:%d",uppercase);
printf("the number of characters in a lowercase:%d",lowercase);
return 0;
}
