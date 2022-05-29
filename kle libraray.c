#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct kle
{
    int period;


};

typedef struct kle  NI;
void read(NI[],int);
void display(NI[],int);

void main()
{
    int n,period,penalty,i;
    NI p[20];
    printf("Enter number of students:");
    scanf("%d",&n);
    read(p,n);
    display(p,n);


    if(period>15)
    {
        penalty=2+i;
        printf("penalty=%d",penalty);
    }
    else
    {
        printf("no penalty");
    }

}

void read(NI p[],int n)
{
    printf("\nEnter student details\n\n");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter period");
        scanf("%d",&p[i].period);

    }
}

void display(NI p[],int n)
{
    printf("\n student details.....\n\n");
    for(int i=0;i<n;i++)
    {
        printf("\n period:%d",p[i].period);

    }
}

