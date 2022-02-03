#include<stdio.h>
void swap(int*p,int*q)
int left(int i);
{
return(2*i+1);
}
int right(int);
{
return(2*i+1);
}
void heapify(int a[],int i,int n)
{
int l=left(i);
int r=right(i);
int lar=i;
if(a[i]>a[lar]&&i<n)
lar=l;
if(a[r]>a[lar]&&r<n)
lar=r;
if(i!=lar)
{
swap(&a[i],&a[lar]);
heapify(a,lar,n);
}
void heapsort(int a[],int n)
{
int i;
t=*p;
*p=*q;
*q=t;
}
void main()
{
int a[50],n,i;
printf("how many no:s");
scanf("%d",&n);
printf("enter %d no:s",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
heapsort(a,n);
printf("sorted no:s are \n");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
