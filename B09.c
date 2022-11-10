#include <stdio.h>
int ary[1501][1501];

int main(void)
{
    int N, a, b, c, d, i, j;
    scanf("%d", &N);

    for (int n_i = 0; n_i < N; n_i++)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        ary[b][a]++;
        ary[d][c]++;
        ary[b][c]--;
        ary[d][a]--;
    }
    int total = 0;
    for (i = 0; i <= 1500; i++)
    {
        total = 0;
        for (j = 0; j <= 1500; j++)
        {
            total = total + ary[i][j];
            ary[i][j] = total;
        }
    }
    for (j = 0; j <= 1500; j++)
    {
        total = 0;
        for (i = 0; i <= 1500; i++)
        {
            total = total + ary[i][j];
            ary[i][j] = total;
        }
    }
    int ans = 0;
    for (i = 0; i <= 1500; i++)
    {
        for (j = 0; j <= 1500; j++)
        {
            if (ary[i][j] > 0)
                ans++;
        }
    }
    printf("%d\n", ans);
    return (0);
}