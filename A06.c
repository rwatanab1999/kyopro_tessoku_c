#include <stdio.h>

int main(void)
{
    int n, q;
    scanf("%d%d", &n, &q);
    int a[n + 1], b[n + 1];
    a[0] = 0;
    b[0] = 0;
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        total = total + a[i];
        b[i] = total;
    }
    int l, r;
    int ans;
    for (int i = 1; i <= q; i++)
    {
        scanf("%d%d", &l, &r);
        ans = b[r] - b[l - 1];
        printf("%d\n", ans);
    }
    return (0);
}
