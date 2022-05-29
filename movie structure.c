#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct metro
{
    char producer[50],name[50],production_house[50];
    char director[50];
    int year;

};
typedef struct metro ST;
void read(ST a[],int n);
void display(ST a[],int n);


void main()
{
    ST a[100];
    int n;
    printf("enter the number of movies\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);

}
void read(ST a[],int n)
{
    int i;
    printf("enter movie details\n ");
    for(i=0;i<n;i++)
    {
        printf("enter name:\t");
        scanf("%s",a[i].name);
        printf("enter producer:\t");
        scanf("%s",a[i].producer);
        printf("enter director:\t");
        scanf("%s",a[i].director);
        printf("enter production_house:\t");
        scanf("%s",a[i].production_house);
        printf("enter year:\t");
        scanf("%d",&a[i].year);
        printf("\n");
    }
}
void display(ST a[],int n)
{
    int i;
    printf("enter student details\n ");
    for(i=0;i<n;i++)
    {
        printf("enter name:\t");
        printf("%s",a[i].name);
        printf("enter producer:\t");
        printf("%s",a[i].producer);
        printf("enter director:\t");
        printf("%s",a[i].director);
        printf("enter production_house:\t");
        printf("%s",a[i].production_house);
        printf("enter year:\t");
        printf("%d",a[i].year);
                printf("\n\n");
    }
}

