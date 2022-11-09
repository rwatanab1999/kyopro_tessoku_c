#include <stdio.h>

int main(void)
{
    int h, w, x, total, q, q_i, ans, a, b, c, d;
    scanf("%d%d", &h, &w);
    int y[h + 1][w + 1];
    int i, j;
    for (i = 1; i <= h; i++)
    {
        total = 0;
        for (j = 0; j <= w; j++)
        {
            if (j == 0)
                y[i][j] = 0;
            else
            {
                scanf("%d", &x);
                total = total + x;
                y[i][j] = total;
            }
        }
    }
    for (j = 1; j <= w; j++)
    {
        total = 0;
        for (i = 0; i <= h; i++)
        {
            if (i == 0)
                y[i][j] = 0;
            else
            {
                total = total + y[i][j];
                y[i][j] = total;
            }
        }
    }
    scanf("%d", &q);
    for (q_i = 0; q_i < q; q_i++)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        ans = y[c][d] - y[a - 1][d] - y[c][b - 1] + y[a - 1][b - 1];
        printf("%d\n", ans);
    }
    return (0);
}