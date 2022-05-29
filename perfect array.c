#include <stdio.h>

int main()
{
    int n = 1000, i, j, sum = 0;
    int v[n];

    for (i = 1; i < n; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] == 0)
        {
            break;
        }

        for (j = 1; j < v[i]; j++)
        {
            if (v[i] % j == 0)
            {
                printf("%d", j);
                sum = sum + j;
            }
        }
    }

    printf("\n%d",sum);

    return 0;
}
