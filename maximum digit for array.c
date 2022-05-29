#include<stdio.h>
void readarray(int[],int);
void printarray(int[],int);

void maximum(int[],int);
void main()
{
    int N,a[100];
    printf("enter N value");
    scanf("%d",&N);
    readarray(a,N);
    printarray(a,N);

    maximum(a,N);
}
void readarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void maximum(int a[],int n)
{
    int max,i,location=1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            location=i+1;
        }
    }
    printf("maximum element%d and its location is %d",location,maximum);
}
