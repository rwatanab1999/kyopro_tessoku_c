#include <stdio.h>
int N, K;
int A[100009], R[100009];

int main(void)
{
    scanf("%d%d", &N, &K);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 1; i <= N - 1; i++)
    {
        if (i == 1)
            R[i] = 1;
        else
            R[i] = R[i - 1];
        while (R[i] < N && A[R[i] + 1] - A[i] <= K)
            R[i]++;
    }
    long long ans = 0;
    for (int i = 1; i <= N - 1; i++)
        ans += (R[i] - i);
    printf("%lld\n", ans);
    return (0);
}