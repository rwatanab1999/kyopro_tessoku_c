#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, ans, i;
    scanf("%d", &n);
    ans = 0;
    for (i = 0; n > 0; i++)
    {
        ans = ans + ((n % 2) * (int)pow(2, i));
        n = n / 10;
    }
    printf("%d\n", ans);
    return (0);
}