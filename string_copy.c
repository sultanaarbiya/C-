#include<stdio.h>
//#include<string.h>
void scopy(char s1[20], char s2[30]);
int main()
{
int i;
char s1[10],s2[10];
printf("enter the string1:");
gets(s1);
//printf("enter the string2: ");
//gets(s2);
scopy(s1,s2);
printf("the string is:%s",s2);
//puts(s2);
return 0;
}


void scopy(char s1[20], char s2[30])
{
int i;
for(i=0;s1[i]!='\0';i++)
{
s2[i]=s1[i];
}
s2[i]='\0';
}
