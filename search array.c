#include<stdio.h>
void readarray(int [],int);
void printarray(int[],int);
int search(int [],int);
void main()
{
    int a[10],n,s;
    printf("enter n value");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    search(a,n);
    printarray(a,n);
}
void readarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int search(int a[],int n)
{
    int i,key,flag;
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
        if(flag==1)
        {
            printf("Element found at index=%d\n");
        }
        else
        {
            printf("Element not found=%d\n");
        }
    }
}
