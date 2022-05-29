#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node * insert_rear(struct node *first)
{
    struct node *nw,*last;
    nw=(struct node *)malloc(sizeof(struct node));
    nw->next=NULL;
    if(nw==NULL)
    {
        printf("\n Memory not allocated");
        exit(0);
    }
    printf("enter data\n");
    scanf("%d",&nw->data);
    if(first==NULL)
    {
        first=nw;
    }
    else
    {
        for(last=first;last->next!=NULL;last=last->next);
        {
            last->next=nw;
        }
    }
   return(first);
}
void display(struct node *first)
{
    struct node *cur;
    for(cur=first;cur!=NULL;cur=cur->next)
    {
        printf("\n%d",cur->data);
    }
}
struct node *merge(struct node *f1,struct node *f2)
{
    struct node *cur;
    if(f1==NULL)
    {
        return(f2);
    }
    if(f2==NULL)
    {
        return(f1);
    }
    for(cur=f1;cur->next!=NULL;cur=cur->next);
    {
        cur->next=f2;
        return(f1);
    }
}
int main()
{
    struct node *first,*f1,*f2;
    int n,i;
    first=NULL;
    printf("\nEnter value of n ");
    scanf("%d",&n);
    printf("\n enter f1");
    for(i=0;i<n;i++)
        first=insert_rear(first);
        printf("\n before merging");
        display(first);
        first=merge(f1,f2);
        printf("\n\nafter merging");
        display(first);
        printf("\n\n");

        return(0);
}
