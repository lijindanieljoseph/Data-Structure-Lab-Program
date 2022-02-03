#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node*ptr;
};
int main()
{
typedef struct node NODE;
NODE*start=NULL,*p,*temp;
int ans=1;
while(ans==1)
{
printf("\n\n\t single linkd list\n");
temp=(NODE*)malloc ((sizeof (NODE)));
printf("enter the data to be inserted");
scanf("%d",&temp->data);
if(start==NULL)
{
temp->ptr=NULL;
start=temp;
}
else
{
temp->ptr=start;
start=temp;
}
