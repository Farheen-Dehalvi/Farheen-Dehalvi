#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct recharge
{
    char type[10];
    long long int num;
    int amount;
    struct recharge *next;
};
typedef struct recharge *node;

node getnode()
{
    node newn;
    newn = (node)malloc(sizeof(struct recharge));
    if (newn == NULL)
    {
        printf("Not created\n");
        exit(0);
    }
    newn->next = NULL;
    scanf("%lld %d %s",&newn->num,&newn->amount,newn->type);
    return newn;
}

node insert_rear(node head)
{
    node newn=NULL,cur=NULL;
    newn=getnode();
    if(head==NULL)
    {
       return newn;
    }
   else
    {
        cur=head;
        while(cur->next!=NULL)
        {


        cur=cur->next;
        }
        cur->next=newn;
    }
    return head;
}

void recharg(node head)
{
    int a=0,b=0,flag1=0,flag2=0;
    node cur=NULL;
        cur=head;
        printf("Postpaid Requests\n");
        while(cur!=NULL)
        {
            if(strcmp(cur->type,"postpaid")==0)
            {
                a=a+cur->amount;
                flag1=1;
            }
            cur=cur->next;
        }
            if(flag1==1)
            {
                cur=head;
                 while(cur!=NULL)
                 {
                     if(strcmp(cur->type,"postpaid")==0)
                     {
                        printf("%lld %d %s\n",cur->num,cur->amount,cur->type);
                     }cur=cur->next;
                  }
                printf("%d\n",a);
            }
            else
            {
                printf("Queue Empty\n0\n");
            }

         cur=head;
        printf("Prepaid Requests\n");

        while(cur!=NULL)
        {
            if(strcmp(cur->type,"prepaid")==0)
            {

                b=b+cur->amount;
                flag2=1;
            }
            cur=cur->next;
        }
        if(flag2==1)
        {
           cur=head;
           while(cur!=NULL)
           {
               if(strcmp("prepaid",cur->type)==0)
               {
                   printf("%lld %d %s\n",cur->num,cur->amount,cur->type);
               }            cur=cur->next;
          }
           printf("%d\n",b);
        }
       else
      {
          printf("Queue Empty\n0\n");
      }
}

int main()
{
    node head=NULL;
    int i,N;
    scanf("%d",&N);
    if(N>0)
    {
        for(i=0;i<N;i++)
        {
            head=insert_rear(head);
        }
          recha
