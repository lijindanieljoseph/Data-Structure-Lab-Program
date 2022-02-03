#include<stdio.h>
#include<malloc.h>
struct node
{int data;
struct node*pre,*next;
};
typedef struct node Node;
Node*head=NULL,*temp,*p,*t,*q;
void insert_node_first();
void insert_node_last();
void insert_node_pos();
void delete_node_first();
void delete_node_last();
void delete_node_pos();
void display();
int main()
{int ans=1,ch;
while(ans==1)
{printf("operations on doubly linked list\n");
printf("\n1.insert node at first");
printf("\n2.insert node at last");
printf("\n3.insert node at pos");
printf("\n4.delete node at first");
printf("\n5.delete node at last");
printf("\n6.delete node at pos");
printf("\n7.display linked list");
printf("\n8.exit\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
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
if(head==NULL)
{temp->pre=NULL;
temp->next=NULL;
head=temp;}
else
{temp->next=head;
head->pre=temp;
temp->pre=NULL;
head=temp;
}
}
void insert_node_last()
{temp=(Node*)malloc((sizeof(Node)));
printf("ENTER DATA TO BE INSERTED");
scanf("%d",&temp->data);
if(head==NULL)
{temp->pre=NULL;
temp->next=NULL;
head=temp;}
else
{
p=head;
while(p->next!=NULL)
{
p=p->next;
p->next=temp;
temp->next=NULL;
}}}
void insert_node_pos()
{int i,pos;
temp=(Node*)malloc((sizeof(Node)));
printf("ENTER DATA TO BE INSERTED");
scanf("%d",&temp->data);
if(head==NULL)
{temp->pre=NULL;
temp->next=NULL;
head=temp;}
else
{printf("enter the position");
scanf("%d",&pos);
p=head;
for(i=1;i<pos-1;i++)
p=p->next;
t=p->next;
temp->pre=p;
temp->next=t;
t->pre=temp;
p->next=temp;
}}
void delete_node_first()
{if(head==NULL)
printf("\ndeletion is not possible");
else if(head->next==NULL)
{temp=head;
head=NULL;
printf("\ndeleted item is%d",temp->data);
free(temp);
}
else
{temp=head;
head=temp->next;
head->pre=NULL;}}
void delete_node_last()
{
if(head==NULL)
printf("\ndeletion is not possible");
else
p=head;
while(p->next!=NULL)
{p=p->next;
t=p->pre;
t->next=NULL;
printf("\ndeleted item is%d",p->data);
p=NULL;
free(p);
}}
void delete_node_pos()
{int pos,i;
if(head==NULL)
{printf("deletion is not possible");}
else
printf("\nenter the position");
scanf("%d",&pos);
p=head;
for(i=1;i<pos-1;i++)
{
p=p->next;
t=p->next;
q=t->next;
p->next=q;
p=q->pre;
printf("deleted item is %d",t->data);
t=NULL;
free(t);
}}
void display()
{
if(head==NULL)
printf("\n list is empty");
else
{
for(p=head;p!=NULL;p=p->next)
{printf("%d \n",p->data);}
}
}



