#include<stdio.h>
void readarray(int[],int);
void printarray(int[],int);
void bubblesort(int[],int);
void main()
{
    int N,a[100];
    printf("enter N value\n");
    scanf("%d\n",&N);
    readarray(a,N);
    printarray(a,N);
    bubblesort(a,N);
    printarray(a,N);
}
void readarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
