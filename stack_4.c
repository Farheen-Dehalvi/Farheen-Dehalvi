#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,K;
    scanf("%d %d",&N,&K);

    int arr[100];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    int w=0,l=0;

    for(int j=N-1;j>=0;j--)
    {
        if(arr[j] % K==0)
        {
            printf("W ");
            w++;
        }
        else{
            printf("L ");
            l++;
        }
    }
    printf("\n");
    printf("%d\n",w);
    printf("%d\n",l);
    return 0;

}
