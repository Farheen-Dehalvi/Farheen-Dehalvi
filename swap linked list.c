#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;
NODE insert_front(NODE);
void Display(NODE);
void pairswap(NODE);
void swap(int *a,int *b);
NODE getNode();
void main()
{
    int choice;
    NODE head = NULL;
    while(1)
    {
        printf("\n press\n 1 for insert_at_front \n 2 for Display \n 3 for pairswap \n 4 for swap\n 5 for exit  \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: head = insert_front(head);
            break;
            case 2: Display(head);
            break;
            case 3:pairswap(head);
            break;
            case 4:swap;
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
void pairswap(NODE head)
{
   NODE temp;
  temp=head;
  while(temp!=NULL && temp->next!=NULL)
  {
      (&temp->data,&temp->next->data);
      temp=temp->next->next;
  }
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
