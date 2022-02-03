#include<stdio.h>
#include<stdlib.h>
#define max 5
int top=-1,stack[max];
void push();
void pop();
void display();
void main()
{
int ch;
while(1)
{
printf("\n stack menu");
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.display");
printf("\n 4.exit");
{printf("\n enter your choice");
scanf("%d",&ch);}
switch(ch)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:display();
	break;
case 4:exit(0);
default:printf("\n wrong choice");		
}}}
void push()
{
int val;
if(top==max-1)
{printf("\n stack is full");}
else
{printf("enter the element to push");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}}
void pop()
{if(top==-1)
{printf("\n stack is empty");}
else
{printf("\n deleted element is %d",stack[top]);
top=top-1;
}}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty");}
else
{
printf("\n stack is \n");}
for(i=top;i>=0;--i)
printf("%d \n",stack[i]);
}

