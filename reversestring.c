#include<stdio.h>
int main()
{
char str[20],temp;
int i=0,j=0;
printf("enter the string");
scanf("%s",str);
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;

}
printf("Reverse string=%s",str);
return 0;
}
