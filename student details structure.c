#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char id;
    char name[50];
    float percentage;
};
typedef struct student ST;
void read(ST a[],int n);
void display(ST a[],int n);

void main()
{
    ST a[100];
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
}
void read(ST a[],int n)
{
    int i;
    printf("enter student details\n ");
    for(i=0;i<n;i++)
    {
        printf("enter id:\t");
        scanf("%d",&a[i].id);
        printf("enter name:\t");
        scanf("%s",a[i].name);
        printf("enter percentage:\t");
        scanf("%f",&a[i].percentage);
        printf("\n");
    }
}
void display(ST a[],int n)
{
    int i;
    printf("enter student details\n ");
    for(i=0;i<n;i++)
    {
        printf("enter id:\t");
        printf("%d\n",a[i].id);
        printf("enter name:\t");
        printf("%s\n",a[i].name);
        printf("enter percentage:\t");
        printf("%0.2f\n",a[i].percentage);
        printf("\n\n");
    }
}
