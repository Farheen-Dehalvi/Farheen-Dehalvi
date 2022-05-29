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
void read(ST *a);
void display(ST *a);

void main()
{
    ST *a;

    a=(ST*)malloc(10*sizeof(ST));

    read(a);
    display(a);
}
void read(ST *a)
{
    int i;
    printf("enter student details\n ");
    for(i=0;i<10;i++)
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
void display(ST *a)
{
    int i;
    printf("enter student details\n ");
    for(i=0;i<10;i++)
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
