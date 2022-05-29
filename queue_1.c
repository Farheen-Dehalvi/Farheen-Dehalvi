#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct agri
{
    char name[100];
    char loan_type[100];
    int amount;
    struct agri *next;
}*node;
node front1=NULL;
node end1=NULL;
node front2=NULL;
node end2=NULL;
node getnode()
{
    node nw;
    nw=(node)malloc(sizeof(struct agri));
    if(nw==NULL)
    {
        printf("memory error\n");
        return NULL;
    }
    scanf("%s%s%d",nw->name,nw->loan_type,&nw->amount);
    nw->next=NULL;
    return nw;
}
void enqueue1(node nw)
{
    if(end1==NULL)
    {
        front1=end1=nw;
    }

    else
    {
        end1->next=nw;
        end1=nw;

    }
}

void enqueue2(node nw)
{
    if(end2==NULL)
    {
        front2=end2=nw;
    }

    else
    {
        end2->next=nw;
        end2=nw;

    }
}

void display1()
{
    node cur=front1;
    if(front1==NULL)
    {
        printf("Queue Empty\n");
        return;
    }
    while(cur!=NULL)
    {
        printf("%s %s %d",cur->name,cur->loan_type,cur->amount);
        cur=cur->next;
        printf("\n");
    }

}

void display2()
{
    node cur=front2;
    if(front2==NULL)
    {
        printf("Queue Empty\n");
        return;
    }
    while(cur!=NULL)
    {
        printf("%s %s %d",cur->name,cur->loan_type,cur->amount);
        cur=cur->next;
        printf("\n");
    }

}

int main(){
    node nw;
    int n, shorta=0, longa=0,cnt=0;
    scanf("%d",&n);
    while(n--){
        nw = getnode();
        if (strcmp(nw->loan_type,"short")==0 && (nw->amount < 50000))
        {
            shorta = nw->amount + shorta;
            enqueue1(nw);
            cnt++;
        }
        else if(strcmp(nw->loan_type,"long")==0 && (nw->amount < 100000)){
            longa = nw->amount +longa;
            enqueue2(nw);
            cnt++;
        }

    }
    printf("Short term Application details\n");
    display1();
    if(shorta!=0){
       printf("%d\n",shorta);
    }
    printf("Long term Application details\n");
    display2();
    if(longa!=0){
       printf("%d\n",longa);
    }
    printf("%d\n",cnt);

}
