#include <stdio.h>

int main()
{
	int N, i;
	int num, cnt;

	scanf("%d", &N);

	num = 0;
	while (N != 0) {
		num = num * 10 + N % 10;
		N /= 10;
	}

	cnt = 0;
	for (i = 1; i <= num; i++)
		if (num%i == 0) cnt++;

	printf("%d\n%d", num, cnt);

	return 0;
}