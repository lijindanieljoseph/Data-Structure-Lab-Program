#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],front=0,rear=0;
void enqueue();
void dequeue();
void display();
void main()
{
int ch;
while(1)
{
printf("\n queue menu");
printf("\n 1.enqueue \n 2.dequeue \n 3.display \n 4.exit");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
	break;
case 2:dequeue();
	break;
case 3:display();
	break;
case 4:exit(0);
default:printf("\n wrong choice");
}}} 
void enqueue()
{
int element;
if(rear==max)
{printf("\n overflow");}
else
if((rear=0)&&(front=0))
front=1;
{printf("\n enter element");
scanf("%d",&element);
queue[rear++]=element;
printf("\n %d enqueued at %d",element,rear);
}}
void dequeue()
{
if(front==0)
{printf("\n underflow");}
else
{
printf("\n %d is dequeued from %d",queue[front],front);
front++;
}}
void display()
{
int i;
if(front==0)
{printf("\n queue is empty");}
else
{
for(i=front;i<max;i++)
{
printf("\n %d \n",queue[i]);}
}}
