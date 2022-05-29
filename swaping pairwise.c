#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void disp(struct node *);
struct node * swap(struct node *);
struct node* insertr(struct node *);



int main()
{
    struct node *head;
    int n,i;
    head=NULL;
    printf("\nEnter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        head=insertr(head);
    disp(head);
    printf("\nSwapping : ");
    head=swap(head);
    printf("\nAfter swapping : \n");
    disp(head);
    return 0;
}
void disp(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}

struct node* swap(struct node *head)
{
    struct node *t1,*t2,*t3;
    int flag=0;
    if(head==NULL ||  head->next==NULL)
    {
        printf("\nOperation swap cannot be performed");
        return(head);
    }
    t1=head;
    t2=head->next;
    while(t1!=NULL && t2!=NULL)
    {
        t1->next = t2->next;
        t2->next = t1;
        if(flag == 0)
        {
            head = t2;
            flag=1;
        }
        else
        {
           t3->next = t2;
        }
        t3=t1;
        t1=t1->next;
        if(t1!=NULL)
            t2=t1->next;

    }
    return(head);

}
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
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nw;
    }
    return(head);
}
