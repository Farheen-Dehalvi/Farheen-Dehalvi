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
int Display(NODE);
NODE getNode();

NODE getNode()
{
    int element;
    NODE nw;
    nw=malloc(sizeof(struct node));
    if(nw==NULL)
    {
        printf("memory not allocated");
    }

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
int display (struct node *head)
{struct node *cur;
int sum=0;
for(cur=head;cur->next!=NULL;cur=cur->next)
   {if(cur->data%2==0 || cur->data%5==0 && cur->next->data%3==0 )
    {
    printf("%d ",cur->data);
    sum=sum+cur->data;
}
    }
   if(cur->data%2==0 || cur->data%5==0 )
   {
printf("%d ",cur->data);
sum=sum+cur->data;
}
return sum;
}
int main()
{struct node* head=NULL;
    int N,i,s;
    printf("ENTER NUMBER OF APPLES\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        head=insert_front(head);
    }
    s=display(head);
printf("\n\ntotal grams of apples=%d",s);
return 0;
}
