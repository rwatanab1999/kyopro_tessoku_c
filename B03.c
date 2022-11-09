#include <stdio.h>

int main(void)
{
    int n, i, j, k, x;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 2; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                x = a[i] + a[j] + a[k];
                if (x == 1000)
                {
                    printf("Yes\n");
                    return (0);
                }
            }
        }
    }
    printf("No\n");
    return (0);
}