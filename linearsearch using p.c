#include<stdio.h>
#include<string.h>
void readarrat(int *a,int n);
void printarray(int *a,int n);
void linear(int *a,int n);
void main()
{
    int a,n;
    printf("enter value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    linear(a,n);

}
void readarray(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
}
void printarray(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
}
void linear(int *a,int n)
{
    int i,flag;
    for(i=0;i<n;i++)
    {
        if(*(a+i)==flag)
            return i;

    }
    return -1;
    if(flag==-1)
        printf("number is not present\n",linear);
    else
        printf("number is present at location\n",linear,a+1);

}
