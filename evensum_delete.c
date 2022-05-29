#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};
typedef struct node *NODE;
NODE insert_front(NODE head);
NODE delete_front(NODE head,NODE teemp);
void Display(NODE head);
NODE getNode();

NODE getNode()
{
    NODE newNODE;
    int element;
    newNODE=malloc(sizeof(struct node));
    if(newNODE==NULL)
    {
        printf("Memory is allocated\n");
    }

    scanf("%d",&element);
    newNODE->data=element;
    newNODE->next=NULL;
    return newNODE;
}
NODE insert_front(NODE head)
{
    NODE newNode;
    newNode=getNode();
    newNode->next=head;
    newNode->previous=NULL;
    if(head!=NULL)
         head->previous=newNode;
         head=newNode;
    return(head);
}
void Display(NODE head)
{
   NODE temp;
    printf("Final List=");
    for(temp=head;temp->next!=NULL;temp=temp->next)
    {
        printf("%d<=>",temp->data);
    }
    printf("%d",temp->data);
}

NODE delete_front(NODE head,NODE temp)
{
    NODE cur=temp;
    if(head==NULL || temp==NULL)
    {
        return(head);
    }
    if(temp==head)
    {
        head=temp->next;
    }
    else if(temp->next==NULL)
    {
        temp->previous=NULL;
    }
    else
    {
        temp->next->previous=temp->previous;
        temp->previous->next=temp->next;
    }
    free(cur);
    return(head);
}
int main()
{

    int n,i;
    NODE head=NULL;
    NODE temp,cur;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        head=insert_front(head);
    }
    temp=head;
    while(temp!=NULL)
        {
            cur=temp->next;
            if(temp->data%2==0)
               head=delete_front(head,temp);
            temp=cur;
        }
        Display(head);
    return 0;
}
