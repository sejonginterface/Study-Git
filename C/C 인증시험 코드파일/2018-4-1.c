#include <stdio.h>

int main()
{
	int fibo = 0;
	int fib1 = 0, fib2 = 1;
	int i, N;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		fib1 = fib2;
		fib2 = fibo;
		fibo = fib1 + fib2;
	}

	printf("F(%d)=%d+%d=%d", N, fib1, fib2, fibo);

	return 0;
}