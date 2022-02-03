
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
NODE*start=NULL,*temp,*p,*t;
int ans=1;
int pos,i;
while(ans==1)
{
printf("\n\n\tsingle linked list");
temp=(NODE*)malloc(sizeof(NODE));
printf("enter the data to be inserted");
scanf("%d",&temp->data);
if(start==NULL)
{
temp->ptr=NULL;
start=temp;
}
else
{
printf("\n enter the position");
scanf("%d",&pos);
p=start;
for(i=1;i<pos-1;i++)
{
p=p->ptr;
}
temp->ptr=p->ptr;
p->ptr=temp;
}
printf("\n you want to continue(y/n)");
scanf("%d",&ans);
}
printf("\n linked list after insertion \n");
if(start==NULL)
printf("\n list is empty");
else
{
for(p=start;p!=NULL;p=p->ptr)
printf("%d\n",p->data);
}
return 0;
}
