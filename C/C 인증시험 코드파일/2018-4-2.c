#include <stdio.h>

int main()
{
	int fibo;
	int fib1, fib2;
	int i, j, N, M;

	scanf("%d %d", &N, &M);

	for (i = N; i <= M; i++) {
		fibo = fib1 = 0;
		fib2 = 1;
		for (j = 1; j <= i; j++) {
			fib1 = fib2;
			fib2 = fibo;
			fibo = fib1 + fib2;
		}

		printf("F(%d)=%d+%d=%d\n", i, fib1, fib2, fibo);
	}

	return 0;
}