#include <stdio.h>

int main(void)
{
    int n, x, i;
    int a;

    scanf("%d%d", &n, &x);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a == x)
        {
            printf("Yes\n");
            return (0);
        }
    }
    printf("No\n");
    return (0);
}