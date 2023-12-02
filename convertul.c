#include<stdio.h>
int main()
{

char s[20];
char *ptr=s;
gets(s);
while(*ptr!='\0')
{
if(*ptr>='A'&&*ptr<='Z')
{
*ptr=s+32;
}
/* if(*ptr>='a'&&*ptr<='z')
{
*ptr=*ptr-32;
}*/
ptr++;
}
printf("the uppercase letters are:%s\n",*ptr);
printf("the lowercase letters are:%s\n",*ptr);
return 0;
}
