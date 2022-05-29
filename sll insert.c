#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
typedef struct node *NODE;
NODE insert_front(NODE);
NODE insert_end(NODE);
NODE insert_pos(NODE);
void Display(NODE);
NODE getNode();
void main()
{
    int choice;
    NODE head = NULL;
    while(1)
    {
        printf("\n press\n 1 for insert_at_front \n 2 for insert_at_end\n 3 for Display \n 4 for insert at specified position \n 5 for exit  \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: head = insert_front(head);
            break;
            case 2: head=insert_end(head);
            break;
            case 3: Display(head);
            break;
            case 4:head=insert_pos(head);
            break;
            case 5:exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
NODE getNode()
{
    NODE newNODE;
    int element;
    newNODE=malloc(sizeof(struct node));
    if(newNODE==NULL)
    {
        printf("Memory is allocated\n");
    }
    printf("Enter the data part\n");
    scanf("%d",&element);
    newNODE->data=element;
    newNODE->next=NULL;
    return newNODE;
}
NODE insert_front(NODE head)
{
    NODE newNode;
    newNode=getNode();
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        return head;
    }
    newNode->next=head;
    head=newNode;
    return head;
}
void Display(NODE head)
{
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    NODE temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
NODE insert_end(NODE head)
{

    NODE newNode=getNode();
    if(head==NULL)
    {
        head=newNode;
        return head;
    }
else
{
    NODE temp=head;
    while(temp->next!=NULL)

        {
            temp=temp->next;
        }
        temp->next=newNode;

        return head;
}
}
NODE insert_pos(NODE head)
{
    int pos;
    printf("enter the position\n");
    scanf("%d",&pos);
    if(head==NULL && pos>1)
    {
        printf("Cannot add the element at this position \n");
        return head;
    }
    else if(pos==1)
    {
        head=insert_front(head);
        return head;
    }
    else
    {
        int i=1;
        NODE newNode=getNode();
        NODE cur=head,prev=NULL;
        while(cur!=NULL && i<pos)
        {
            prev=cur;
            cur=cur->next;
            i++;
        }
        if(pos>i)
        {
            printf("Cannot add the element at this position \n");
            return head;
        }
        else
        {
            prev->next=newNode;
            newNode->next=cur;
            return head;
        }
    }
}
