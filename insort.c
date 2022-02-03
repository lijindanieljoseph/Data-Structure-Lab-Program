#include<stdio.h>
void main()
{
int a[10],j,i,key,n;
printf("enter the no; of element");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(j=1;j<n;j++)
{
	key=a[j];
	i=j-1;
while(i>=0&&a[i]>key)
{
	a[i+1]=a[i];
	i--;
}
	a[i+1]=key;
}
	printf("sorted order is");
for(i=0;i<n;i++)
	printf("%d",a[i]);
}

	
