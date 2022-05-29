#include <stdio.h>
#include <stdlib.h>
struct metro
{
    int nu;
    char from[50];
    char to[50];
};

void read(struct metro *p,int n)
{
    int i;
    printf("\nEnter %d metro ticket details:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d%s%s",&p->nu,p->from,p->to);
        p++;
    }
}

void display(struct metro *p,int n,int k)
{
    int i;
    struct metro *q;
    q=p;
    printf("\nEntered %d metro ticket details:",n);
    if(k==0)
    {
        for(i=0;i<n-1;i++)
            q++;
    }
    for(i=0;i<n;i++)
    {
        printf("Ticket number:%d  From:%s   To:%s\n",q->nu,q->from,q->to);
        if(k==1)
            q++;
        else
            q--;
    }
}

int main()
{
     int n,k=1;
    struct metro *p;
    printf("\nEnter n: ");
    scanf("%d",&n);
    p=(struct metro*)malloc(n*sizeof(struct metro));
    read(p,n);
    printf("\nFrom top:\n");
    display(p,n,k);
    k=0;
    printf("\nFrom bottom:\n");
    display(p,n,k);
    return 0;
}
