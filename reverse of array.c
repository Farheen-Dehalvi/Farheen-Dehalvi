#include<stdio.h>
void readarray(int [],int);
void printarray(int[],int);
void reverse(int[],int,int);
void main()
{
    int N,a[100];
    printf("Enter N values\n");
    scanf("%d",&N);
    readarray(a,N);
    printarray(a,N);
    reverse(a,0,N-1);
    printf("After reverse\n");
    printarray(a,N);
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
void reverse(int a[],int l,int h)
{
    int temp;
    while(l<h)
    {
        temp=a[l];
        a[l]=a[h];
        a[h]=temp;
        l++;
        h--;
    }
}
