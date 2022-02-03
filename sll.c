#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node*link;
}
NODE;
void push(int);
int pop();
void display();
NODE*top=NULL;
void main()
{ 
int opn,elem;
do
{
printf("\n linked list  implementation of stack opns\n\n");
printf("\n\n1.push 2.pop 3.display 4.exit\n\n");
scanf("%d",&opn);
switch(opn)
{
case 1:printf("read the elements to be pushed");
	scanf("%d",&elem);
	push(elem);
	break;	
case 2:elem=pop();
	
	break;
case 3:printf("LL implementation of stack\n");
	display();
	break;
case 4:printf("invalid option");
	break;
}
printf("\n press a key to conti:");
}
while(opn!=4);
}
void push(int info)
{
NODE* temp;
temp=((NODE*)malloc(sizeof(NODE)));
temp->data=info;
temp->link=top;
top=temp;
printf("node has been inserted at top successfully");
}
int pop()
{
int info;
NODE* t;
if(top==NULL)
{printf("under flow");}
else
{
t=top;
info=top->data;
top=top->link;
t->link=NULL;
free(t);
printf("deleted node is %d",info);
return(info);
}
}
void display()
{
NODE*t;
if(top==NULL)
printf("empty stack \n");
else
{
t=top;
while(t)
{
printf("[%d]->",t->data);
t=t->link;
}
printf("NULL \n");
}}



