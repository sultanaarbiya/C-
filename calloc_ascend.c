#include<stdio.h>
int main()
{
int i,j,n,temp;
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

for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(*(ptr+i)>*(ptr+j))
{
temp=*(ptr+i);
*(ptr+i)=*(ptr+j);
*(ptr+j)=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",*(ptr+i));
}
free(ptr);
return 0;
}
