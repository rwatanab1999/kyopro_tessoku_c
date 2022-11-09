#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, ans, i;
    scanf("%d", &n);
    i = 9;
    while (i >= 0)
    {
        ans = (n / (int)pow(2,i)) % 2;
        printf("%d", ans);
        i--;
    }
    printf("\n");
    return (0);
}