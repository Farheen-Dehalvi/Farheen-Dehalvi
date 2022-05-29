#include<stdio.h>
void readarray(int a[10][10],int,int);
void printarray(int a[10][10],int,int);
void transpose(int a[10][10],int b[10][10],int,int);
int main()
{
    int m,n,a[10][10],b[10][10];
    scanf("%d%d",&m,&n);
    printf("Enter m and n\n");
    readarray(a,m,n);
    printarray(a,m,n);
    transpose(a,b,m,n);
    printarray(a,m,n);
}
void readarray(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void printarray(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void transpose(int a[10][10],int b[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            b[j][i]=a[i][j];
    }
}




