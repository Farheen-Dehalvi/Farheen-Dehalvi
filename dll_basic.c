#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};
typedef struct node *NODE;
NODE insert_front(NODE);
NODE insert_end(NODE);
NODE delete_front(NODE);
NODE delete_any(NODE);
NODE insert_any(NODE head);
void Display(NODE);
NODE getNode();
void main()
{
    int choice;
    NODE head = NULL;
    while(1)
    {
        printf("\n press\n 1 for insert_at_front \n 2 for insert_at_end\n 4 for Display \n 3 for delete front \n 5 for delete at end \n 6 for insert any any pos\n 7 for exit  \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: head = insert_front(head);
            break;
            case 2: head=insert_end(head);
            break;
            case 3: head=delete_front(head);
            break;
            case 4:Display(head);
            break;
            case 5:head=delete_any(head);
            break;
            case 6: head=insert_any(head);
            break;
            case 7:exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
NODE getNode()
{
    int element;
    NODE nw;
    nw=malloc(sizeof(struct node));
    if(nw==NULL)
    {
        printf("memory not allocated");
    }
    printf("enter data part");
    scanf("%d",&element);
    nw->data=element;
    nw->next=NULL;
    return nw;
}
NODE insert_front(NODE head)
{
    NODE nw;
    nw=getNode();
    nw->next=head;
    nw->previous=NULL;
    if(head!=NULL)
        head->previous=nw;
    head=nw;
    return(head);

}
void Display(NODE head)
{
   NODE cur;
   for(cur=head;cur->next!=NULL;cur=cur->next)
   {
        printf("%d<=>",cur->data);
   }
   printf("%d<=>",cur->data);
}
NODE insert_end(NODE head)
{
    NODE nw,last;
    nw=getNode();
    if(head==NULL)
    {
        head=nw;
        nw->previous=NULL;
    }
    else
    {
        for(last=head;last->next!=NULL;last=last->next);
        last->next=nw;
        nw->previous=last;
    }
    nw->next=NULL;
    return(head);
}
NODE delete_front(NODE head)
{
   NODE cur;
   if(head==NULL)
        head=NULL;
   else
   {
       cur=head;
       head=head->next;
       if(head!=NULL)
        head->previous=NULL;
       free(cur);
   }
   return(head);
}
NODE delete_any(NODE head)
{
    NODE t1,t2,cur;
    int ele;
    printf("element to delete\n");
    scanf("%d\n",&ele);
    for(cur=head;cur!=NULL && cur->data!=ele;cur=cur->next);
    if(cur==NULL)
    {
        printf("Node not found");
        return(head);
    }
    t1=cur->previous;
    t2=cur->next;
    if(t1==NULL)
        head=t2;
    else
        t1->next=t2;
    if(t2!=NULL)
        t2->previous=t2;
    free(cur);
    return(head);
}
NODE insert_any(NODE head)
{
    NODE nw,cur,prev;
    int i,pos;
    printf("enter position");
    scanf("%d\n",&pos);
    nw=getNode();
    for(prev=NULL,cur=head,i=1;cur!=NULL && i<pos;prev=cur,cur=cur->next,i++);
    if(prev==NULL)
        head=nw;
    else
        prev->next=nw;
    nw->previous=prev;
    nw->next=cur;
    if(cur!=NULL)
        cur->previous=nw;
    return(head);
}
