#include <stdio.h>

int main(void)
{
    double N;
    scanf("%lf", &N);
    double l, r, m, total_m;
    l = 0;
    r = 46;
    while (l < r)
    {
        m = (l + r) / 2;
        total_m = (m * m * m) + m;
        if ((total_m - N) > 0.001) // N < total_m
            r = m;
        else if ((total_m - N) < -0.001) // total_m < N
            l = m;
        else
        {
            printf("%lf\n", m);
            break;
        }
    }
    return (0);
}