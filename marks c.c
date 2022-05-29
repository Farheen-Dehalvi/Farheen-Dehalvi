#include<stdio.h>
struct marks_details
{
    int marks;

};
typedef struct marks_details ab;



void read(ab b[100],int n);
void display(ab b[100],int n);
void search(ab b[100],int n);

void main()
{
    ab b[100];
    int n,count=0,marks,i;
    printf("enter the no of students:");
    scanf("%d",&n);
    read(b,n);
    display(b,n);
    search(b,n);

}

void read(ab b[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the marks:");
        scanf("%d",&b[i].marks);

    }
}
void display(ab b[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("\n marks:%d",b[i].marks);

    printf("\n");
    }
}
void search(ab b[100],int n)
{
    int i,s;
    printf("enter the marks to:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==b[i].marks)
        {
            printf("\n marks:%d",b[i].marks);

            break;
        }
    }
}
