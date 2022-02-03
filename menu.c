#include<stdio.h>
#include<malloc.h>
struct node
{
 int data;
struct node*ptr;
};
typedef struct node NODE;
NODE*start=NULL,*temp,*p,*t;
void insert_node_first();
void insert_node_last();
void insert_node_pos();
void delete_node_first();
void delete_node_last();
void delete_node_pos();
void display()
int main()
{
int ans=1;int char;
while(ans==1)
{
printf("\n operation on singly linked list\n");
printf("\n 1 insert node at first");
printf("\n 2 insert node at last");
printf("\n 3 insert node at position");
printf("\n 4 delete node at first");
printf("\n 5 delete node at last");
printf("\n 6 delete node at position");
printf("\n 7 display linked list");
printf("\n 8 exit \n");
printf("\n     \n");
printf("enter your choice");
scanf("%d",&ch);
}
switch(ch)
{
case 1:
	printf("\n inserted node at first  \n");
	insert_node_first();
	break;
case 2:
	printf("\n inserting node at last  \n");
	insert_node_last();
	break;
case 3:
	printf("\n inserting node at position	\n");
	inset_node_pos();
	break;
case 4:
	printf("\n delete node at first \n");
	delete_node_first();
	break;
case 5:
	printf("\n delete node at last \n");
	delete_node_last();
	break;
case 6:
	printf("\n delete node at position \n");
	delete_node_pos();
	break;
case 7:
	printf("\n display linked list \n");
	display();
	break;
case 8:
	printf("\n exiting \n");
	return 0;
	break;
default
	printf("\n invalid choice \n");
	break;
}
printf("\n do you want to continue(y/n)");
sacnf("%c",&ans);
return 0;
}
void insert_node_first()
{
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
	temp->ptr=start;
	start=temp;
}
}
void insort_node_last()
{
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
	for(p=start;p->ptr!=NULL;p=p->ptr);
p->ptr=temp;
temp->ptr=NULL;
}
}
void insert_node_pos()
{
int i,pos;
temp=(NODE*)malloc(sizeof(NODE));
printf("enter the data to be inserted");
scanf("%d",&temp->data);
if(start==null)
{
temp->ptr=null;
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
p->ptr=temp;
}
}
void display()
{
if(start==null)
printf("\n list is empty");
else
for(p=start;p!=null,p=p->ptr)
printf("%d\n",p->data);
}


