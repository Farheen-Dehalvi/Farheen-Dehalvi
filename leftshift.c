#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node * insertr(struct node *head)
{
    struct node *nw,*temp;
    nw=(struct node *)malloc(sizeof(struct node));
    nw->next=NULL;
    if(nw==NULL)
    {
        printf("\nMemomry not allocated");
        exit(0);
    }
    printf("\nEnter data:");
    scanf("%d",&nw->data);
    if(head==NULL)
    {
        head=nw;
    }
    else
    {
        for(temp=head;temp->next!=NULL;temp=temp->next);
        temp->next=nw;
    }
    return(head);
}

void disp(struct node *head)
{
    struct node *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("\n%d",temp->data);
    }
}

void shift(struct node *head,int n)
{
    int k,*cur,*last;
    printf("enter value of k");
    scanf("%d",&k);
    if()
}

int main()
{
    struct node *head;
    int n,i;
    head=NULL;
    printf("\nEnter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        head=insertr(head);
    printf("\nBefore shifting: ");
    printf("\n");
    disp(head);
    printf("\n\n");
    shift(head,n);
    printf("\nAfter shifting: ");
    printf("\n");
    disp(head);
    printf("\n\n");
    return 0;
}
