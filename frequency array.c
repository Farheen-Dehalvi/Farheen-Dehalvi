#include<stdio.h>
int main()
{
    int a[100],freq[100];
    int size,i,j,count;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter elements in array");
    for(i=0;i<size;i++)
    {
        scanf("%d",a[i]);
        freq[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j+1;i<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    printf("\n frequency of all elements of array\n");
    for(i=0;i<size;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs % times\n",a[i],freq[i]);
        }
    }
    return 0;
}
