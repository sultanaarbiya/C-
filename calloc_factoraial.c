#include<stdio.h>
int main()
{
int fact=1,a[10],i,j,n;
printf("enter the number to check:");
scanf("%d",&n);
int *ptr=(int*)calloc(n,sizeof(int));

if(ptr==NULL)
{
printf("memory is not allocated");
}

printf("enter the integers: ");
for(i=0;i<n;i++)
{

scanf("%d",ptr+i);

}

for(i=0;i<n;i++)
{
fact=1;
for(j=n;j>=1;j--)
{
fact=fact*j;
}

printf("%d",fact);
free(ptr);
return 0;
}
}
