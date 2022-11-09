#include <stdio.h>

int main(void)
{
    int t, n, l, r;
    scanf("%d%d", &t, &n);
    int shift[t + 1];
    for (int i = 0; i < t + 1; i++)
        shift[i] = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &l, &r);
        shift[l]++;
        shift[r]--;
    }
    int total = 0;
    for (int i = 0; i < t; i++)
    {
        total = total + shift[i];
        printf("%d\n", total);
    }
    return (0);
}