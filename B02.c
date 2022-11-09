#include <stdio.h>
int main(void)
{
    int a, b, y, x;
    scanf("%d%d", &a, &b);
    for (x = a; x <= b; x++)
    {
        y = 100 % x;
        if (y == 0)
        {
            printf("Yes\n");
            return (0);
        }
    }
    printf("No\n");
    return (0);
}