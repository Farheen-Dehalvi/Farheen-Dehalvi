#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int marks;


};

typedef struct student  NI;
void read(NI[],int);
void display(NI[],int);
void average(NI[],int);
void main()
{
    int n;
    NI p[20];
    printf("Enter number of students:");
    scanf("%d",&n);
    read(p,n);
    display(p,n);

    average(p,n);

}

void read(NI p[],int n)
{
    printf("\nEnter student details\n\n");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter marks");
        scanf("%d",&p[i].marks);

    }
}

void display(NI p[],int n)
{
    printf("\n student details.....\n\n");
    for(int i=0;i<n;i++)
    {
        printf("\n marks:%d",p[i].marks);

    }
}
void average(NI p[],int n)
{
    int i,sum=0,baverage=0,aaverage=0,marks;
    float average;
    {
    sum=sum+i;
    average=sum/n;
    }
printf("average=%f",average);
if(average>marks)
{
    aaverage++;
    printf("above average=%d",&aaverage);
}
else
{
    baverage++;
    printf("below average=%d",&baverage);
}
}
