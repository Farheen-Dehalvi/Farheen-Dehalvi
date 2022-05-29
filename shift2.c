#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node * insertrear(struct node *head)
{
    struct node *nw,*temp;
    nw=(struct node *)malloc(sizeof(struct node));
    nw->next=NULL;
    if(nw==NULL)
    {
        printf("\n Memory not allocated");
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
    int k,i,temp;
    struct node *cur,*s;
    printf("\nEnter value of k ");
    scanf("%d",&k);
    if(head==NULL || head->next==NULL || k>n)
        return;
    cur=head;
    s=head;
    for(i=0;i<k;i++)
        s=s ->next;
    for(i=0;i<k && cur!=NULL;i++)
    {
        temp=cur->data;
        cur->data=s->data;
        s->data=temp;
        cur=cur->next;
        s=s->next;
    }
}

int main()
{
    struct node *head;
    int n,i;
    head=NULL;
    printf("\nEnter value of n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        head=insertrear(head);
    printf("\nBefore shifting ");
    printf("\n");
    disp(head);
    printf("\n\n");
    shift(head,n);
    printf("\nAfter shifting ");
    printf("\n");
    disp(head);
    printf("\n\n");
    return 0;
}

