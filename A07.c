#include <stdio.h>

int main(void)
{
    int d, n, l, r;
    scanf("%d%d", &d, &n);
    int a[d];
    for (int i = 0; i < d; i++)
        a[i] = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &l, &r);
        a[l - 1]++;
        a[r]--;
    }
    int ans = 0;
    for (int i = 0; i < d; i++)
    {
        ans = ans + a[i];
        printf("%d\n", ans);
    }
    return (0);
}