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
void read(ST *a,int n);
void display(ST *a,int n);

void main()
{
    ST *a,a1[10];
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    a=a1;
    read(a,n);
    display(a,n);
}
void read(ST *a,int n)
{
    int i;
    printf("enter student details\n ");
    for(i=0;i<n;i++)
    {
        printf("enter id:\t");
        scanf("%d",&a->id);
        printf("enter name:\t");
        scanf("%s",a->name);
        printf("enter percentage:\t");
        scanf("%f",&a->percentage);
        printf("\n");
        a++;
    }
}
void display(ST *a,int n)
{
    int i;
    printf("enter student details\n ");
    for(i=0;i<n;i++)
    {
        printf("enter id:\t");
        printf("%d\n",a->id);
        printf("enter name:\t");
        printf("%s\n",a->name);
        printf("enter percentage:\t");
        printf("%0.2f\n",a->percentage);
        printf("\n\n");
        a++;
    }
}
