#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct kle
{
    int rank;


};

typedef struct kle  NI;
void read(NI[],int);
void display(NI[],int);
void sorting(NI[],int);
void highest(NI[],int);
void main()
{
    int n;
    NI p[20];
    printf("Enter number of students:");
    scanf("%d",&n);
    read(p,n);
    display(p,n);

    sorting(p,n);
    highest(p,n);
    display(p,n);

}

void read(NI p[],int n)
{
    printf("\nEnter student details\n\n");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter rank");
        scanf("%d",&p[i].rank);

    }
}

void display(NI p[],int n)
{
    printf("\n student details.....\n\n");
    for(int i=0;i<n;i++)
    {
        printf("\n rank:%d",p[i].rank);
    }
}
void sorting(NI p[],int n)
{
    NI swap;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(p[j].rank<p[j+1].rank)
            {
                swap=p[j];
                p[j]=p[j+1];
                p[j+1]=swap;
            }
        }
    }
}
void highest(NI p[],int n)
{
    int l=p[100],i;
    for(i=1;i<n;i++)
    {
        if(p[i]>l)
            l=p[i];
    }
}
