#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct train
{
    char from[50],to[50];
    int price;
};
typedef struct train ST;
void read(ST *a,int n);
void display(ST *a,int n);
void display2(ST *a,int n);
void main()
{
    ST *a,a1[10];
    int n;
    printf("enter the number of arrivals\n");
    scanf("%d",&n);
    a=a1;
    read(a,n);
    display(a,n);
    display2(a,n);
}
void read(ST *a,int n)
{
    int i;
    printf("enter student details\n ");
    for(i=0;i<n;i++)
    {
        printf("enter from:\t");
        scanf("%s",a->from);
        printf("enter to:\t");
        scanf("%s",a->to);
        printf("enter price:\t");
        scanf("%d",&a->price);
        printf("\n");
        a++;
    }
}
void display(ST *a,int n)
{
    int i;
    printf("enter arrival details\n ");
    for(i=0;i<n;i++)
    {
        printf("enter from:\t");
        printf("%s\n",a->from);
        printf("enter to:\t");
        printf("%s\n",a->to);
        printf("enter price:\t");
        printf("%d\n",a->price);
        printf("\n\n");
        a++;
    }
}
void display2(ST *a,int n)
{
    int i;
    printf("enter reverse arrival details\n ");
    for(i=n-1;i>=0;i--)
    {
        printf("enter from:\t");
        printf("%s\n",a->from);
        printf("enter to:\t");
        printf("%s\n",a->to);
        printf("enter price:\t");
        printf("%d\n",a->price);
        printf("\n\n");
        a++;
    }
}
