#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter value of n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
}
