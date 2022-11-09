#include <stdio.h>
#include <string.h>

int main(void)
{
    int H, W, N, a, b, c, d;
    scanf("%d%d%d", &H, &W, &N);
    int ary[H + 2][W + 2];
    memset(ary, 0, sizeof ary);

    for (int day = 1; day <= N; day++)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        ary[a][b]++; // left up
        ary[c + 1][d + 1]++; // right down
        ary[c + 1][b]--; // right up
        ary[a][d + 1]--; // left down
    }
    int total = 0;
    for (int i = 1; i < H + 2; i++)
    {
        for (int j = 1; j < W + 2; j++)
        {
            total += ary[i][j];
            ary[i][j] = total;
        }
    }
    total = 0;
    for (int j = 1; j < W + 1; j++)
    {
        for (int i = 1; i < H + 2; i++)
        {
            total += ary[i][j];
            ary[i][j] = total;
        }
    }
    for (int i = 1; i < H + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }
    return (0);
}