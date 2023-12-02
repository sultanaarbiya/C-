#include<stdio.h>
int main()
{
int i,j,n,sum=0;
printf("enter the number to check:");
scanf("%d",&n);
int *ptr=(int*)malloc(n*sizeof(int));

if(ptr==NULL)
{
printf("memory is not allocated");
exit(0);
}

printf("enter the integers: ");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
for(i=0;i<n;i++)
{
sum=sum+*(ptr+i);
}
ptr=(int*)realloc(ptr,2*sizeof(int));

if(ptr==NULL)
{
printf("memory is not allocated");
exit(0);
}
printf("enter the integers: ");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
for(i=0;i<n;i++)
{
sum=sum+*(ptr+i);
}
printf("sum=%d",sum);
free(ptr);
return 0;
}
