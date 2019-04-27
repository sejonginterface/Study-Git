#include <stdio.h>

int main()
{
	int N, min;

	scanf("%d", &N);
	min = N;

	while (N >= 0) {
		if (N<min) min = N;
		scanf("%d", &N);
	}

	printf("%d", min);

	return 0;
}