
printf("\n you want to continue(y/n)");
scanf("%d",&ans);
}
printf("\n linked list after insertion \n");
if(start==NULL)
printf("\n list is empty");
else
{
for(p=start;p!=NULL;p=p->ptr)
printf("%d \n",p->data);
}
return 0;
}
