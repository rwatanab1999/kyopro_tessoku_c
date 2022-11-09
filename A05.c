#include <stdio.h>

int main(void)
{
    int n, k, x, a, b, c, count;
    scanf("%d%d", &n, &k);
    
    count = 0;
    for (a = 1; a <= n; a++)
    {
        for (b = 1; b <= n; b++)
        {
            c = k - (a + b);
            if (1 <= c && c <= n)
                count++;
        }
    }
    printf("%d\n", count);
    return (0);
}