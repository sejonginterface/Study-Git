#include <stdio.h>

int main()
{
	int N;
	int i, j;

	scanf("%d", &N);

	for (i = N; i >= 1; i--) {
		for (j = 1; j <= N - i; j++)
			printf(" ");
		for (j = 1; j <= i * 2 - 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}