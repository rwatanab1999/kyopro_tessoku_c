#include <stdio.h>

int main(void)
{
	unsigned long int N, K;
	scanf("%lu%lu", &N, &K);
	unsigned long int a[N];
	for (int i = 0; i < N; i++)
		scanf("%lu", &a[i]);
	
	unsigned long int mt, lt, rt, mt_count;
	lt = 1;
	rt = 1000000000;
	while (lt < rt)
	{
		mt = (lt + rt) / 2;
		mt_count = 0;
		for (int i = 0; i < N; i++)
		{
			mt_count += (mt / a[i]);
		}
		if (K <= mt_count)
			rt = mt;
		else
			lt = mt + 1;
	}
	printf("%lu\n", lt);
	return (0);
}