#include <stdio.h>
#include <stdlib.h>

struct player
{
    int nu;
    char tname[50];
    char pname[50];
};

void read(struct player *p,int n)
{
    int i;
    printf("\nEnter %d player details:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d%s%s",&p->nu,p->tname,p->pname);
        p++;
    }
}

void display(struct player *p,int n)
{
    int i;
    printf("\nEntered %d player details:",n);
    for(i=0;i<n;i++)
    {
        printf("Rank:%d Player Name:%s   Team name:%s\n",p->nu,p->pname,p->tname);
        p++;
    }
}

void sort(struct player *p,int n)
{
    int i,j;
    struct player temp,*q;
    for(i=0;i<n-1;i++)
    {
        q=p;
        for(j=0;j<n-1;j++)
        {
            if((q->nu)>((q+1)->nu))
            {
                temp=*q;
                *q=*(q+1);
                *(q+1)=temp;
            }
            q++;

        }
    }

}

int main()
{
    int n,i;
    FILE *fp;
    fp=fopen("d:file.txt","w");
    struct player *p;
    printf("\nEnter n: ");
    scanf("%d",&n);
    p=(struct player*)malloc(n*sizeof(struct player));
    read(p,n);
    sort(p,n);
    display(p,n);
    for(i=0;i<n;i++)
    {
        fprintf(fp,"%d %s %s\n",p->nu,p->pname,p->tname);
        p++;
    }
    fclose(fp);
    return 0;
}
