#include <stdio.h>

int main(void)
{
    int N, D, a, l, r;
    scanf("%d", &N);
    int room[N];
    int room_max_l[N];
    int room_max_r[N];
    int max_l = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);
        room[i] = a;
        if (max_l < room[i])
            max_l = room[i];
        room_max_l[i] = max_l;
    }
    int max_r = 0;
    for (int i = N-1; i >= 0; i--)
    {
        if (max_r < room[i])
            max_r = room[i];
        room_max_r[i] = max_r;
    }
    scanf("%d", &D);
    for (int d = 0; d < D; d++)
    {
        scanf("%d%d", &l, &r);
        max_l = room_max_l[l - 2];
        max_r = room_max_r[r];
        if (max_l > max_r)
            printf("%d\n", max_l);
        else
            printf("%d\n", max_r);
    }
    return (0);
}