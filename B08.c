#include <stdio.h>

int ary[1501][1501];

int main(void)
{
    int N, Q, n_i, q_i, x, y, total, i, j, a, b, c, d, ans;
    scanf("%d", &N);
    for (n_i = 1; n_i <= N; n_i++)
    {
        scanf("%d%d", &x, &y);
        ary[y][x]++;
    }
    for (i = 1; i <= 1500; i++)
    {
        total = 0;
        for (j = 1; j <= 1500; j++)
        {
            ary[i][j] = total + ary[i][j];
            total = ary[i][j];
        }
    }
    for (j = 1; j <= 1500; j++)
    {
        total = 0;
        for (i = 1; i <= 1500; i++)
        {
            ary[i][j] = total + ary[i][j];
            total = ary[i][j];
        }
    }
    scanf("%d", &Q);
    for (q_i = 1; q_i <= Q; q_i++)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        ans = ary[d][c] - ary[d][a - 1] - ary[b - 1][c] + ary[b - 1][a - 1];
        printf("%d\n", ans);
    }
    return (0);
}