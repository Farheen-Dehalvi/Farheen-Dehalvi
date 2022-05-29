#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node
{int wt;
struct node *next;
struct node *previous;
};

struct node* getNode()
{
    struct node  *NW;
    NW=malloc(sizeof(struct node));
    if(NW==NULL)
    {
        printf("Memory is not allocated\n");
        exit(0);
    }
    printf("Enter the weight of an apple\n");
    scanf("%d",&NW->wt);
    NW->next=NULL;

    return NW;
}
struct node* getnod()
{
    return(malloc(sizeof(struct node)));
}

struct node* insert_end(struct node *head)
{
    struct node* nw=getnod();

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
   {if(cur->wt%2==0 || cur->wt%5==0 && cur->next->wt%3==0 )
    {
    printf("%d ",cur->wt);
    sum=sum+cur->wt;
}
    }
   if(cur->wt%2==0 || cur->wt%5==0 )
   {
printf("%d ",cur->wt);
sum=sum+cur->wt;
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
        head=insert_end(head);
    }
    s=display(head);
printf("\n\ntotal grams of apples=%d",s);
return 0;
}
