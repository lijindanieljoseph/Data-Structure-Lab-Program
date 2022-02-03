#include<stdio.h>
#include<malloc.h>
struct node
{int data;
struct node*ptr;
};
typedef struct node Node;
Node*start=NULL,*temp,*p,*t;
void insert_node_first();
void insert_node_last();
void insert_node_pos();
void delete_node_first();
void delete_node_last();
void delete_node_pos();
void display();
int main()
{int ans=1;
while(ans==1)
{printf("operations on singly linked list\n");
printf("\n1.insert node at first");
printf("\n2.insert node at last");
printf("\n3.insert node at pos");
printf("\n4.delete node at first");
printf("\n5.delete node at last");
printf("\n6.delete node at pos");
printf("\n7.display linked list");
printf("\n8.exit\n");
printf("enter your choice");
scanf("%d",&ans);
switch(ans)
{case 1:
printf("inserting node at first\n");
insert_node_first();
break;
case 2:
printf("inserting node at last\n");
insert_node_last();
break;
case 3:
printf("inserting node at position\n");
insert_node_pos();
break;
case 4:
printf("deleting node at first\n");
delete_node_first();
break;
case 5:
printf("deleting node at last\n");
delete_node_last();
break;
case 6:
printf("deleting node at position\n");
delete_node_pos();
break;
case 7:
printf("display linked list\n");
display();
break;
case 8:
printf("exit\n");
return 0;
break;
default:
printf("\ninvalid choice\n");
}
printf("DO YOU WANT TO CONTINUE");
scanf("%d",&ans);
}
return 0;}
void insert_node_first()
{temp=(Node*)malloc((sizeof(Node)));
printf("ENTER DATA TO BE INSERTED");
scanf("%d",&temp->data);
if(start==NULL)
{temp->ptr=NULL;
start=temp;}
else
{temp->ptr=start;
start=temp;
}
}
void insert_node_last()
{temp=(Node*)malloc((sizeof(Node)));
printf("ENTER DATA TO BE INSERTED");
scanf("%d",&temp->data);
if(start==NULL)
{temp->ptr=NULL;
start=temp;}
else
{for(p=start;p->ptr!=NULL;p=p->ptr);
p->ptr=temp;
temp->ptr=NULL;
}
}
void insert_node_pos()
{int i,pos;temp=(Node*)malloc((sizeof(Node)));
printf("ENTER DATA TO BE INSERTED");
scanf("%d",&temp->data);
if(start==NULL)
{temp->ptr=NULL;
start=temp;}
else
{printf("enter the position");
scanf("%d",&pos);
p=start;
for(i=1;i<pos-1;i++)
p=p->ptr;
temp->ptr=p->ptr;
p->ptr=temp;
}
}
void delete_node_first()
{if(start==NULL)
printf("\ndeletion is not possible");
else if(start->ptr==NULL)
{temp=start;
start=NULL;
printf("\ndeleted item is%d",temp->data);
free(temp);
}
else
{temp=start;
start=start->ptr;
printf("\ndeleted item is%d",temp->data);
free(temp);
}
}
void delete_node_last()
{
if(start==NULL)
printf("\ndeletion is not possible");
else if(start->ptr==NULL)
{temp=start;
start=NULL;
printf("\ndeleted item is%d",temp->data);
free(temp);
}
else
{temp=start;
t=start->ptr;
while(t->ptr!=NULL)
{t=t->ptr;
temp=temp->ptr;
}
temp->ptr=NULL;
printf("\ndeleted item is%d",t->data);
free(t);
}
}
void delete_node_pos()
{int pos,i;
printf("\nenter the position");
scanf("%d",&pos);
temp=start;
if(pos==1)
{temp=start;
start=start->ptr;
printf("\ndeleted item is%d",temp->data);
free(temp);
}
else
{t=start->ptr;
for(i=1;i<pos-1;i++)
{temp=temp->ptr;
t=t->ptr;
}
printf("\ndeleted item is %d",t->data);
free(t);
}
}
void display()
{if(start==NULL)
printf("EMPTY");
else
{
for(p=start;p!=NULL;p=p->ptr)
printf("%d\n",p->data);
}
}
