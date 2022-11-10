#include <stdio.h>

int main(void)
{
    int N, X;
    scanf("%d%d", &N, &X);
    int ary[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ary[i]);
    }
    int l = 0;
    int r = N - 1;
    int point;
    while (l <= r)
    {
        point = (l + r) / 2;
        if (ary[point] < X)
            l = point + 1;
        else if (ary[point] > X)
            r = point - 1;
        else
           break ; 
    }
    printf("%d\n", point + 1);
    return (0);
}