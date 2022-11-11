#include <stdio.h>
long long A[100009];
long long S[100009];
long long R[100009];

int main(void)
{
    int N, K;
    scanf("%d%d", &N, &K);
    for (int i = 1; i <= N; i++)
    {
        scanf("%lld", &A[i]);
        if (i == 1)
            S[1] = A[1];
        else
            S[i] = S[i - 1] + A[i];
    }

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
            R[i] = 0;
        else
            R[i] = R[i - 1];
        while (R[i] < N && S[R[i] + 1] - S[i - 1] <= K)
            R[i]++;
    }
    long long ans = 0;
    for (int i = 1; i <= N; i++)
        ans += (R[i] - i + 1);
    printf("%lld\n", ans);
    return (0);
}