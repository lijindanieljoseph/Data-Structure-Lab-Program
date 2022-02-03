#include<stdio.h>
void quicksort(int number[25],int f,int l)
{
int i,j,p,t;
if(f<l)
{
p=f;i=f;j=l;
while(i<j)
{
while(number[i]<=number[p]&&i<l)
i++;
while(number[j]>number[p])
j--;
if(i<j)
{
t=number[i];
number[i]=number[j];
number[j]=t;
}
t=number[p];
number[p]=number[j];
number[j]=t;
quicksort(number,f,j-1);
quicksort(number,j+1,l);
}
}}
int main()
{int i,count,number[25];
printf("how many elements");
scanf("%d",&count);
printf("enter the elements");
for(i=0;i<count;i++)
scanf("%d",&number[i]);
quicksort(number,0,count-1);
printf("order of sorted elements");
for(i=0;i<count;i++)
printf("%d",number[i]);
return 0;
}

