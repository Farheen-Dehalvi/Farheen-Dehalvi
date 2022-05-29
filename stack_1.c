#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 25

int main()
{
    int N,a[100];
    scanf("%d ",&N);

    for(int i=0;i<N;i++)
    {
        scanf("%d ",&a[i]);
    }

    int p;
    scanf("%d ",&p);

    for(int j=p;j<N;j++)
    {
        int rem,reverse=0;
        while(a[j]!=0)
        {
            rem = a[j]%10;
            reverse = reverse *10 +rem;
            a[j] = a[j]/10;
        }
        printf("%d ",reverse);
    }
    return 0;
}
