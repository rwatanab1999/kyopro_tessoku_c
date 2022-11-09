#include <stdio.h>

int main(void)
{
    int n, q;
    scanf("%d", &n);
    int a[n + 1], b[n + 1];
    a[0] = 0;
    b[0] = 0;

    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 1)
        {
            total++;
            b[i] = total;
        }
        else
            b[i] = total;
    }
    scanf("%d", &q);
    int l, r, win, lose;
    for (int i = 0; i < q; i++)
    {
        scanf("%d%d", &l, &r);
        win = b[r] - b[l - 1];
        lose = r - (l - 1) - win;
        if (win > lose)
            printf("win\n");
        else if (win == lose)
            printf("draw\n");
        else
            printf("lose\n");
    }
    return (0);
}